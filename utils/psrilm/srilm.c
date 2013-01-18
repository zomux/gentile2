/* Generated by Pyrex 0.9.9 on Thu Mar  8 01:37:23 2012 */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#if !defined(WIN32) && !defined(MS_WINDOWS)
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>
#include "srilmwrap.h"
#include "stdlib.h"


typedef struct {PyObject **p; int i; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from srilmwrap */


/* Declarations from srilm */


/* Declarations from implementation of srilm */

struct __pyx_obj_5srilm_Vocab {
  PyObject_HEAD
  Vocab *vocab;
};

struct __pyx_obj_5srilm_Ngram {
  PyObject_HEAD
  Ngram *ngram;
  struct __pyx_obj_5srilm_Vocab *vocab;
  int order;
};



static PyTypeObject *__pyx_ptype_5srilm_Vocab = 0;
static PyTypeObject *__pyx_ptype_5srilm_Ngram = 0;
static int __pyx_v_5srilm_bufsize;
static int *__pyx_v_5srilm_buf;
static int __pyx_v_5srilm_NONE;

static char __pyx_k1[] = "Couldn't read LM file";


static PyObject *__pyx_k1p;

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k1p, 0, __pyx_k1, sizeof(__pyx_k1)},
  {0, 0, 0, 0}
};

static PyObject *__pyx_d1;


/* Implementation of srilm */

static int __pyx_f_5srilm_5Vocab___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_5srilm_5Vocab___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_is_unk_word = 0;
  int __pyx_r;
  int __pyx_1;
  static char *__pyx_argnames[] = {"is_unk_word",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_is_unk_word)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_is_unk_word);
  __pyx_1 = PyInt_AsLong(__pyx_v_is_unk_word); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
  ((struct __pyx_obj_5srilm_Vocab *)__pyx_v_self)->vocab = new_vocab(__pyx_1);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("srilm.Vocab.__cinit__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_is_unk_word);
  return __pyx_r;
}

static void __pyx_f_5srilm_5Vocab___dealloc__(PyObject *__pyx_v_self); /*proto*/
static void __pyx_f_5srilm_5Vocab___dealloc__(PyObject *__pyx_v_self) {
  Py_INCREF(__pyx_v_self);
  vocab_delete(((struct __pyx_obj_5srilm_Vocab *)__pyx_v_self)->vocab);

  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_f_5srilm_5Vocab_word(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5srilm_5Vocab_word(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_v_i;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {"i",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "i", __pyx_argnames, &__pyx_v_i)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyString_FromString(vocab_word(((struct __pyx_obj_5srilm_Vocab *)__pyx_v_self)->vocab,__pyx_v_i)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 26; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("srilm.Vocab.word");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_5srilm_5Vocab_index(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5srilm_5Vocab_index(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  char *__pyx_v_s;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {"s",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "s", __pyx_argnames, &__pyx_v_s)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyInt_FromLong(vocab_index(((struct __pyx_obj_5srilm_Vocab *)__pyx_v_self)->vocab,__pyx_v_s)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("srilm.Vocab.index");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_5srilm_5Ngram___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_5srilm_5Ngram___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  struct __pyx_obj_5srilm_Vocab *__pyx_v_vocab = 0;
  int __pyx_v_order;
  int __pyx_r;
  static char *__pyx_argnames[] = {"vocab","order",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "Oi", __pyx_argnames, &__pyx_v_vocab, &__pyx_v_order)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_vocab);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_vocab), __pyx_ptype_5srilm_Vocab, 1, "vocab")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 45; goto __pyx_L1;}

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":46 */
  Py_INCREF(((PyObject *)__pyx_v_vocab));
  Py_DECREF(((PyObject *)((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->vocab));
  ((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->vocab = __pyx_v_vocab;

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":47 */
  ((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->ngram = new_ngram(__pyx_v_vocab->vocab,__pyx_v_order);

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":48 */
  ((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->order = __pyx_v_order;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("srilm.Ngram.__cinit__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_vocab);
  return __pyx_r;
}

static int __pyx_f_5srilm_5Ngram___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_5srilm_5Ngram___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_vocab = 0;
  PyObject *__pyx_v_order = 0;
  int __pyx_r;
  static char *__pyx_argnames[] = {"vocab","order",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_vocab, &__pyx_v_order)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_vocab);
  Py_INCREF(__pyx_v_order);

  __pyx_r = 0;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_vocab);
  Py_DECREF(__pyx_v_order);
  return __pyx_r;
}

static void __pyx_f_5srilm_5Ngram___dealloc__(PyObject *__pyx_v_self); /*proto*/
static void __pyx_f_5srilm_5Ngram___dealloc__(PyObject *__pyx_v_self) {
  Py_INCREF(__pyx_v_self);
  ngram_delete(((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->ngram);

  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_f_5srilm_5Ngram_read(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5srilm_5Ngram_read(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_filename = 0;
  PyObject *__pyx_v_limit_vocab = 0;
  PyObject *__pyx_r;
  char *__pyx_1;
  int __pyx_2;
  int __pyx_3;
  static char *__pyx_argnames[] = {"filename","limit_vocab",0};
  __pyx_v_limit_vocab = __pyx_d1;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|O", __pyx_argnames, &__pyx_v_filename, &__pyx_v_limit_vocab)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_filename);
  Py_INCREF(__pyx_v_limit_vocab);
  __pyx_1 = PyString_AsString(__pyx_v_filename); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 57; goto __pyx_L1;}
  __pyx_2 = PyInt_AsLong(__pyx_v_limit_vocab); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 57; goto __pyx_L1;}
  __pyx_3 = (!ngram_read(((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->ngram,__pyx_1,__pyx_2));
  if (__pyx_3) {
    __Pyx_Raise(PyExc_IOError, __pyx_k1p, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("srilm.Ngram.read");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_filename);
  Py_DECREF(__pyx_v_limit_vocab);
  return __pyx_r;
}

static PyObject *__pyx_f_5srilm_5Ngram_wordprob(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5srilm_5Ngram_wordprob(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_v_word;
  PyObject *__pyx_v_context = 0;
  int __pyx_v_length;
  int __pyx_v_i;
  PyObject *__pyx_r;
  Py_ssize_t __pyx_1;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"word","context",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "iO", __pyx_argnames, &__pyx_v_word, &__pyx_v_context)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_context);

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":63 */
  __pyx_1 = PyObject_Length(__pyx_v_context); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 63; goto __pyx_L1;}
  __pyx_v_length = __pyx_1;

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":64 */
  while (1) {
    __pyx_2 = ((__pyx_v_length + 1) > __pyx_v_5srilm_bufsize);
    if (!__pyx_2) break;

    /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":65 */
    __pyx_v_5srilm_bufsize = (__pyx_v_5srilm_bufsize * 2);

    /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":66 */
    __pyx_v_5srilm_buf = ((int *)realloc(__pyx_v_5srilm_buf,(__pyx_v_5srilm_bufsize * (sizeof(int)))));
  }

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":68 */
  (__pyx_v_5srilm_buf[__pyx_v_length]) = __pyx_v_5srilm_NONE;

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":69 */
  for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {
    __pyx_3 = PyInt_FromLong(__pyx_v_i); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
    __pyx_4 = PyObject_GetItem(__pyx_v_context, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_2 = PyInt_AsLong(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    (__pyx_v_5srilm_buf[((__pyx_v_length - __pyx_v_i) - 1)]) = __pyx_2;
  }

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":71 */
  __pyx_3 = PyFloat_FromDouble(ngram_wordProb(((struct __pyx_obj_5srilm_Ngram *)__pyx_v_self)->ngram,__pyx_v_word,__pyx_v_5srilm_buf)); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  __pyx_r = __pyx_3;
  __pyx_3 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("srilm.Ngram.wordprob");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_context);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_5srilm_Vocab(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  if (__pyx_f_5srilm_5Vocab___cinit__(o, a, k) < 0) {
    Py_DECREF(o); o = 0;
  }
  return o;
}

static void __pyx_tp_dealloc_5srilm_Vocab(PyObject *o) {
  {
    PyObject *etype, *eval, *etb;
    PyErr_Fetch(&etype, &eval, &etb);
    ++o->ob_refcnt;
    __pyx_f_5srilm_5Vocab___dealloc__(o);
    if (PyErr_Occurred()) PyErr_WriteUnraisable(o);
    --o->ob_refcnt;
    PyErr_Restore(etype, eval, etb);
  }
  (*o->ob_type->tp_free)(o);
}

static struct PyMethodDef __pyx_methods_5srilm_Vocab[] = {
  {"word", (PyCFunction)__pyx_f_5srilm_5Vocab_word, METH_VARARGS|METH_KEYWORDS, 0},
  {"index", (PyCFunction)__pyx_f_5srilm_5Vocab_index, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Vocab = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Vocab = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Vocab = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Vocab = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_5srilm_Vocab = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "srilm.Vocab", /*tp_name*/
  sizeof(struct __pyx_obj_5srilm_Vocab), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_5srilm_Vocab, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Vocab, /*tp_as_number*/
  &__pyx_tp_as_sequence_Vocab, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Vocab, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Vocab, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_5srilm_Vocab, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_5srilm_Vocab, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_5srilm_Ngram(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_5srilm_Ngram *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_5srilm_Ngram *)o);
  p->vocab = ((struct __pyx_obj_5srilm_Vocab *)Py_None); Py_INCREF(Py_None);
  if (__pyx_f_5srilm_5Ngram___cinit__(o, a, k) < 0) {
    Py_DECREF(o); o = 0;
  }
  return o;
}

static void __pyx_tp_dealloc_5srilm_Ngram(PyObject *o) {
  struct __pyx_obj_5srilm_Ngram *p = (struct __pyx_obj_5srilm_Ngram *)o;
  {
    PyObject *etype, *eval, *etb;
    PyErr_Fetch(&etype, &eval, &etb);
    ++o->ob_refcnt;
    __pyx_f_5srilm_5Ngram___dealloc__(o);
    if (PyErr_Occurred()) PyErr_WriteUnraisable(o);
    --o->ob_refcnt;
    PyErr_Restore(etype, eval, etb);
  }
  Py_XDECREF(((PyObject *)p->vocab));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_5srilm_Ngram(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_5srilm_Ngram *p = (struct __pyx_obj_5srilm_Ngram *)o;
  if (p->vocab) {
    e = (*v)(((PyObject*)p->vocab), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_5srilm_Ngram(PyObject *o) {
  struct __pyx_obj_5srilm_Ngram *p = (struct __pyx_obj_5srilm_Ngram *)o;
  PyObject *t;
  t = ((PyObject *)p->vocab); 
  p->vocab = ((struct __pyx_obj_5srilm_Vocab *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_5srilm_Ngram[] = {
  {"read", (PyCFunction)__pyx_f_5srilm_5Ngram_read, METH_VARARGS|METH_KEYWORDS, 0},
  {"wordprob", (PyCFunction)__pyx_f_5srilm_5Ngram_wordprob, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Ngram = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Ngram = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Ngram = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Ngram = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_5srilm_Ngram = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "srilm.Ngram", /*tp_name*/
  sizeof(struct __pyx_obj_5srilm_Ngram), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_5srilm_Ngram, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Ngram, /*tp_as_number*/
  &__pyx_tp_as_sequence_Ngram, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Ngram, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Ngram, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_5srilm_Ngram, /*tp_traverse*/
  __pyx_tp_clear_5srilm_Ngram, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_5srilm_Ngram, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_5srilm_5Ngram___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_5srilm_Ngram, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initsrilm(void); /*proto*/
PyMODINIT_FUNC initsrilm(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("srilm", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_5srilm_Vocab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Vocab", (PyObject *)&__pyx_type_5srilm_Vocab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  __pyx_ptype_5srilm_Vocab = &__pyx_type_5srilm_Vocab;
  __pyx_type_5srilm_Ngram.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_5srilm_Ngram) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Ngram", (PyObject *)&__pyx_type_5srilm_Ngram) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  __pyx_ptype_5srilm_Ngram = &__pyx_type_5srilm_Ngram;

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":34 */
  __pyx_v_5srilm_bufsize = 5;

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":35 */
  __pyx_v_5srilm_buf = ((int *)malloc(__pyx_v_5srilm_bufsize));

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":38 */
  __pyx_v_5srilm_NONE = (-1);

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":56 */
  Py_INCREF(Py_False);
  __pyx_d1 = Py_False;

  /* "/Users/raphael/RAFADOC/Works/abraham/utils/psrilm/srilm.pyx":60 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("srilm");
}

static char *__pyx_filenames[] = {
  "srilm.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name) {
    if (!type) {
        PyErr_Format(PyExc_SystemError, "Missing type object");
        return 0;
    }
    if ((none_allowed && obj == Py_None) || PyObject_TypeCheck(obj, type))
        return 1;
    PyErr_Format(PyExc_TypeError,
        "Argument '%s' has incorrect type (expected %s, got %s)",
        name, type->tp_name, obj->ob_type->tp_name);
    return 0;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
    if (value == Py_None)
        value = NULL;
    if (tb == Py_None)
        tb = NULL;
    Py_XINCREF(type);
    Py_XINCREF(value);
    Py_XINCREF(tb);
    if (tb && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }
    #if PY_VERSION_HEX < 0x02050000
    if (!PyClass_Check(type))
    #else
    if (!PyType_Check(type))
    #endif
    {
        /* Raising an instance.  The value should be a dummy. */
        if (value) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto raise_error;
        }
        /* Normalize to raise <class>, <instance> */
        value = type;
        #if PY_VERSION_HEX < 0x02050000
            if (PyInstance_Check(type)) {
                type = (PyObject*) ((PyInstanceObject*)type)->in_class;
                Py_INCREF(type);
            }
            else {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception must be an old-style class or instance");
                goto raise_error;
            }
        #else
            type = (PyObject*) type->ob_type;
            Py_INCREF(type);
            if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception class must be a subclass of BaseException");
                goto raise_error;
            }
        #endif
    }
    PyErr_Restore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        if (t->i)
            PyString_InternInPlace(t->p);
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}