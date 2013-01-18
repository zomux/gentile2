# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.4
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.



from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_srilm_wrapper', [dirname(__file__)])
        except ImportError:
            import _srilm_wrapper
            return _srilm_wrapper
        if fp is not None:
            try:
                _mod = imp.load_module('_srilm_wrapper', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _srilm_wrapper = swig_import_helper()
    del swig_import_helper
else:
    import _srilm_wrapper
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0



def new_intArray(*args):
  return _srilm_wrapper.new_intArray(*args)
new_intArray = _srilm_wrapper.new_intArray

def delete_intArray(*args):
  return _srilm_wrapper.delete_intArray(*args)
delete_intArray = _srilm_wrapper.delete_intArray

def intArray_getitem(*args):
  return _srilm_wrapper.intArray_getitem(*args)
intArray_getitem = _srilm_wrapper.intArray_getitem

def intArray_setitem(*args):
  return _srilm_wrapper.intArray_setitem(*args)
intArray_setitem = _srilm_wrapper.intArray_setitem

def initLM(*args):
  return _srilm_wrapper.initLM(*args)
initLM = _srilm_wrapper.initLM

def deleteLM(*args):
  return _srilm_wrapper.deleteLM(*args)
deleteLM = _srilm_wrapper.deleteLM

def getIndexForWord(*args):
  return _srilm_wrapper.getIndexForWord(*args)
getIndexForWord = _srilm_wrapper.getIndexForWord

def getWordForIndex(*args):
  return _srilm_wrapper.getWordForIndex(*args)
getWordForIndex = _srilm_wrapper.getWordForIndex

def readLM(*args):
  return _srilm_wrapper.readLM(*args)
readLM = _srilm_wrapper.readLM

def readVocab(*args):
  return _srilm_wrapper.readVocab(*args)
readVocab = _srilm_wrapper.readVocab

def getWordProb(*args):
  return _srilm_wrapper.getWordProb(*args)
getWordProb = _srilm_wrapper.getWordProb

def wordProb(*args):
  return _srilm_wrapper.wordProb(*args)
wordProb = _srilm_wrapper.wordProb

def getProb(*args):
  return _srilm_wrapper.getProb(*args)
getProb = _srilm_wrapper.getProb

def getSentenceProb(*args):
  return _srilm_wrapper.getSentenceProb(*args)
getSentenceProb = _srilm_wrapper.getSentenceProb

def corpusStats(*args):
  return _srilm_wrapper.corpusStats(*args)
corpusStats = _srilm_wrapper.corpusStats

def getCorpusProb(*args):
  return _srilm_wrapper.getCorpusProb(*args)
getCorpusProb = _srilm_wrapper.getCorpusProb

def getCorpusPpl(*args):
  return _srilm_wrapper.getCorpusPpl(*args)
getCorpusPpl = _srilm_wrapper.getCorpusPpl

def howManyNgrams(*args):
  return _srilm_wrapper.howManyNgrams(*args)
howManyNgrams = _srilm_wrapper.howManyNgrams

def getUnigramProb(*args):
  return _srilm_wrapper.getUnigramProb(*args)
getUnigramProb = _srilm_wrapper.getUnigramProb

def getBigramProb(*args):
  return _srilm_wrapper.getBigramProb(*args)
getBigramProb = _srilm_wrapper.getBigramProb

def getTrigramProb(*args):
  return _srilm_wrapper.getTrigramProb(*args)
getTrigramProb = _srilm_wrapper.getTrigramProb
# This file is compatible with both classic and new-style classes.


