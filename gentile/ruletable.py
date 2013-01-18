"""
Rule table controller of Gentile Model

- Raphael 2012.9
"""
import os,sys,cPickle
from abraham.treestruct import DepTreeStruct
from abraham.logger import log_error
from abraham.setting import setting

PSEUDO_COSTS = [-10, -10, -10, -10, -10, -10, 2.718, 0]

class GentileRuleTable:
  """
  Rule table controller of Gentile Model
  """
  ruletables = None
  indextables = None
  ntables = None

  def __init__(self):
    """
    Load rule table files.
    """
    setting.load(["rule_table_path","dispersion_tables"])
    print "[GentileRuleTable] Loading rule table handles ..."
    self.ntables = setting.dispersion_tables
    self.ruletables = {}
    for itable in range(setting.dispersion_tables):
      self.ruletables[itable] = open("%s/rules.final.%d" % (setting.rule_table_path, itable))
    print "[GentileRuleTable] Loading index tables ..."
    self.indextables = {}
    for itable in range(setting.dispersion_tables):
      map_index = {}
      path_table = "%s/index.final.%d" % (setting.rule_table_path, itable)
      file_index_table = open(path_table,"r")
      ftable = file_index_table
      line = ftable.readline()
      while line:
        pair = line.strip().split(" ")
        if len(pair) != 2:
          line = ftable.readline()
          continue
        hash_src, pos = pair
        hash_src = int(hash_src, 16)
        pos = int(pos)
        map_index[hash_src] = pos
        line = ftable.readline()
      self.indextables[itable] = map_index
      file_index_table.close()
      ftable.close()
    
  def findBySource(self, source, sites, context):
    """
    Find rules by a given fragment.
    return a list of rules.

    @type context: string
    @type source: string
    @type sites: list of node
    @return: (target,sites,costs)
    @rtype: list of (rule)
    """
    hash_source = hash(source)
    itable = hash_source % self.ntables
    try:
      pos = self.indextables[itable][hash_source]
    except:
      # not found source
      return []
    ftable = self.ruletables[itable]
    ftable.seek(pos)
    rules = []
    disableIndexes = []
    while True:
      # read rules until a ### is found
      line = ftable.readline().rstrip()
      if line == "###":
        break
      target, str_costs = line.split(" ||| ")

      # HACK: 2012/10/22
      # Do not use X->[X0] after 3rd rules
      # if target == "[X0]" and len(rules) >2:
      #   disableIndexes.append(len(rules))

      costs = [float(c) for c in str_costs.split(" ")]
      # append cost of CONTEXTMATCHING

      # HACK: 10/24
      # This is a totally bad list of rules
      if not rules and costs[0] < -5.52:
        return []
      if costs[0] < -6.5:
        disableIndexes.append(len(rules))

      # Translation prob balance cost
      costs.insert(0, -pow(abs(costs[1]-costs[2]),2))

      costs.append(0)
      rules.append([target,sites,costs])
    # find context derivations
    # until a :xxx is found
    while True:
      line = ftable.readline()
      if not line or line[0] == ":":
        break
      if line.startswith(context):
        str_nrules = line.strip().split(" ||| ")[1]
        nrules_matching = [int(n) for n in str_nrules.split(" ")]
        for irule in nrules_matching:
          # set cost of CONTEXTMATCHED to 2.7
          rules[irule][2][-1] = 2.718
        break
    if setting.debug:
        print "[findByFragmentString] [Y]", source

    if disableIndexes:
      return [r for i,r in enumerate(rules) if i not in disableIndexes]
    else:
      return rules

  def setSitesForRules(self, rules, sites):
    """
    Replace sites for given rules.
    """
    newRules = []
    for rule in rules:
      rule = (rule[0], sites, rule[2])
      newRules.append(rule)
    return newRules
  
  def buildPsuedoRule(self,target,sites):
    """
    Build a psuedo rule for given fragment
    Normal Rule:
      @return: ("X0 X1 X3 ...", sites, pseudo costs)
    Lexical Rule:
      @return (target, sites, pseudo costs)
    """
    if not target:
      target = " ".join(["[X%d]" % n for n in range(len(sites))])
    return (target, sites, PSEUDO_COSTS)

########## TEST ######
def test():
  """
  Got nothing to say.
  """
  ruletable = GentileRuleTable()
  print "--- findBySource ---"
  for r in ruletable.findBySource("supporting [NN]", [1], "NN"):
    target, sites, costs = r
    print target, "|", sites, costs
  print "--- buildPsuedoRule ---"
  print ruletable.buildPsuedoRule([1,2,3])


if __name__ == '__main__':
  test()
