
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "autoconf/librpc/gen_ndr/ndr_nfs4acl.h"
#include "autoconf/librpc/gen_ndr/ndr_nfs4acl_c.h"

#include "librpc/gen_ndr/misc.h"
#include "librpc/gen_ndr/security.h"
staticforward PyTypeObject nfs4ace_Type;
staticforward PyTypeObject nfs4acl_Type;
staticforward PyTypeObject nfs4acl_InterfaceType;

void initnfs4acl(void);static PyTypeObject *Object_Type;
static PyTypeObject *ClientConnection_Type;

static PyObject *py_nfs4ace_get_e_type(PyObject *obj, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(obj);
	PyObject *py_e_type;
	py_e_type = PyInt_FromLong(object->e_type);
	return py_e_type;
}

static int py_nfs4ace_set_e_type(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->e_type = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4ace_get_e_flags(PyObject *obj, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(obj);
	PyObject *py_e_flags;
	py_e_flags = PyInt_FromLong(object->e_flags);
	return py_e_flags;
}

static int py_nfs4ace_set_e_flags(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->e_flags = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4ace_get_e_mask(PyObject *obj, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(obj);
	PyObject *py_e_mask;
	py_e_mask = PyInt_FromLong(object->e_mask);
	return py_e_mask;
}

static int py_nfs4ace_set_e_mask(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->e_mask = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4ace_get_e_id(PyObject *obj, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(obj);
	PyObject *py_e_id;
	py_e_id = PyInt_FromLong(object->e_id);
	return py_e_id;
}

static int py_nfs4ace_set_e_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->e_id = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4ace_get_e_who(PyObject *obj, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(obj);
	PyObject *py_e_who;
	py_e_who = PyString_FromStringOrNULL(object->e_who);
	return py_e_who;
}

static int py_nfs4ace_set_e_who(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(py_obj);
	object->e_who = talloc_strdup(pytalloc_get_mem_ctx(py_obj), PyString_AS_STRING(value));
	return 0;
}

static PyObject *py_nfs4ace_get__pad(PyObject *obj, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(obj);
	PyObject *py__pad;
	py__pad = PyString_FromStringAndSize((char *)(object->_pad).data, (object->_pad).length);
	return py__pad;
}

static int py_nfs4ace_set__pad(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4ace *object = (struct nfs4ace *)pytalloc_get_ptr(py_obj);
	object->_pad = data_blob_talloc(pytalloc_get_mem_ctx(py_obj), PyString_AS_STRING(value), PyString_GET_SIZE(value));
	return 0;
}

static PyGetSetDef py_nfs4ace_getsetters[] = {
	{ discard_const_p(char, "e_type"), py_nfs4ace_get_e_type, py_nfs4ace_set_e_type },
	{ discard_const_p(char, "e_flags"), py_nfs4ace_get_e_flags, py_nfs4ace_set_e_flags },
	{ discard_const_p(char, "e_mask"), py_nfs4ace_get_e_mask, py_nfs4ace_set_e_mask },
	{ discard_const_p(char, "e_id"), py_nfs4ace_get_e_id, py_nfs4ace_set_e_id },
	{ discard_const_p(char, "e_who"), py_nfs4ace_get_e_who, py_nfs4ace_set_e_who },
	{ discard_const_p(char, "_pad"), py_nfs4ace_get__pad, py_nfs4ace_set__pad },
	{ NULL }
};

static PyObject *py_nfs4ace_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct nfs4ace, type);
}


static PyTypeObject nfs4ace_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "nfs4acl.nfs4ace",
	.tp_getset = py_nfs4ace_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_nfs4ace_new,
};


static PyObject *py_nfs4acl_get_a_version(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_a_version;
	py_a_version = PyInt_FromLong(object->a_version);
	return py_a_version;
}

static int py_nfs4acl_set_a_version(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->a_version = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4acl_get_a_flags(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_a_flags;
	py_a_flags = PyInt_FromLong(object->a_flags);
	return py_a_flags;
}

static int py_nfs4acl_set_a_flags(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->a_flags = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4acl_get_a_count(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_a_count;
	py_a_count = PyInt_FromLong(object->a_count);
	return py_a_count;
}

static int py_nfs4acl_set_a_count(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->a_count = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4acl_get_a_owner_mask(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_a_owner_mask;
	py_a_owner_mask = PyInt_FromLong(object->a_owner_mask);
	return py_a_owner_mask;
}

static int py_nfs4acl_set_a_owner_mask(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->a_owner_mask = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4acl_get_a_group_mask(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_a_group_mask;
	py_a_group_mask = PyInt_FromLong(object->a_group_mask);
	return py_a_group_mask;
}

static int py_nfs4acl_set_a_group_mask(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->a_group_mask = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4acl_get_a_other_mask(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_a_other_mask;
	py_a_other_mask = PyInt_FromLong(object->a_other_mask);
	return py_a_other_mask;
}

static int py_nfs4acl_set_a_other_mask(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->a_other_mask = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_nfs4acl_get_ace(PyObject *obj, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(obj);
	PyObject *py_ace;
	py_ace = PyList_New(object->a_count);
	if (py_ace == NULL) {
		return NULL;
	}
	{
		int ace_cntr_0;
		for (ace_cntr_0 = 0; ace_cntr_0 < object->a_count; ace_cntr_0++) {
			PyObject *py_ace_0;
			py_ace_0 = pytalloc_reference_ex(&nfs4ace_Type, object->ace, &object->ace[ace_cntr_0]);
			PyList_SetItem(py_ace, ace_cntr_0, py_ace_0);
		}
	}
	return py_ace;
}

static int py_nfs4acl_set_ace(PyObject *py_obj, PyObject *value, void *closure)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int ace_cntr_0;
		object->ace = talloc_array_ptrtype(pytalloc_get_mem_ctx(py_obj), object->ace, PyList_GET_SIZE(value));
		if (!object->ace) { return -1;; }
		talloc_set_name_const(object->ace, "ARRAY: object->ace");
		for (ace_cntr_0 = 0; ace_cntr_0 < PyList_GET_SIZE(value); ace_cntr_0++) {
			PY_CHECK_TYPE(&nfs4ace_Type, PyList_GET_ITEM(value, ace_cntr_0), return -1;);
			if (talloc_reference(object->ace, pytalloc_get_mem_ctx(PyList_GET_ITEM(value, ace_cntr_0))) == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			object->ace[ace_cntr_0] = *(struct nfs4ace *)pytalloc_get_ptr(PyList_GET_ITEM(value, ace_cntr_0));
		}
	}
	return 0;
}

static PyGetSetDef py_nfs4acl_getsetters[] = {
	{ discard_const_p(char, "a_version"), py_nfs4acl_get_a_version, py_nfs4acl_set_a_version },
	{ discard_const_p(char, "a_flags"), py_nfs4acl_get_a_flags, py_nfs4acl_set_a_flags },
	{ discard_const_p(char, "a_count"), py_nfs4acl_get_a_count, py_nfs4acl_set_a_count },
	{ discard_const_p(char, "a_owner_mask"), py_nfs4acl_get_a_owner_mask, py_nfs4acl_set_a_owner_mask },
	{ discard_const_p(char, "a_group_mask"), py_nfs4acl_get_a_group_mask, py_nfs4acl_set_a_group_mask },
	{ discard_const_p(char, "a_other_mask"), py_nfs4acl_get_a_other_mask, py_nfs4acl_set_a_other_mask },
	{ discard_const_p(char, "ace"), py_nfs4acl_get_ace, py_nfs4acl_set_ace },
	{ NULL }
};

static PyObject *py_nfs4acl_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct nfs4acl, type);
}

static PyObject *py_nfs4acl_ndr_pack(PyObject *py_obj)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	enum ndr_err_code err;
	err = ndr_push_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_push_flags_fn_t)ndr_push_nfs4acl);
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	return PyString_FromStringAndSize((char *)blob.data, blob.length);
}

static PyObject *py_nfs4acl_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	int blob_length = 0;
	enum ndr_err_code err;
	const char * const kwnames[] = { "data_blob", "allow_remaining", NULL };
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s#|O:__ndr_unpack__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	if (allow_remaining) {
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_nfs4acl);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_nfs4acl);
	}
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_nfs4acl_ndr_print(PyObject *py_obj)
{
	struct nfs4acl *object = (struct nfs4acl *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_nfs4acl, "nfs4acl", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_nfs4acl_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_nfs4acl_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_nfs4acl_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_nfs4acl_ndr_print, METH_VARARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject nfs4acl_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "nfs4acl.nfs4acl",
	.tp_getset = py_nfs4acl_getsetters,
	.tp_methods = py_nfs4acl_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_nfs4acl_new,
};


static bool pack_py_nfs4acl_test_args_in(PyObject *args, PyObject *kwargs, struct nfs4acl_test *r)
{
	PyObject *py_acl;
	const char *kwnames[] = {
		"acl", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:nfs4acl_test", discard_const_p(char *, kwnames), &py_acl)) {
		return false;
	}

	PY_CHECK_TYPE(&nfs4acl_Type, py_acl, return false;);
	if (talloc_reference(r, pytalloc_get_mem_ctx(py_acl)) == NULL) {
		PyErr_NoMemory();
		return false;
	}
	r->in.acl = *(struct nfs4acl *)pytalloc_get_ptr(py_acl);
	return true;
}

static PyObject *unpack_py_nfs4acl_test_args_out(struct nfs4acl_test *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (NT_STATUS_IS_ERR(r->out.result)) {
		PyErr_SetNTSTATUS(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_nfs4acl_methods[] = {
	{ "test", "S.test(acl) -> None", (py_dcerpc_call_fn)dcerpc_nfs4acl_test_r, (py_data_pack_fn)pack_py_nfs4acl_test_args_in, (py_data_unpack_fn)unpack_py_nfs4acl_test_args_out, 0, &ndr_table_nfs4acl },
	{ NULL }
};

static PyObject *interface_nfs4acl_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_nfs4acl);
}

static PyTypeObject nfs4acl_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "nfs4acl.nfs4acl",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "nfs4acl(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n",
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_nfs4acl_new,
};

static PyMethodDef nfs4acl_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initnfs4acl(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_misc;
	PyObject *dep_samba_dcerpc_security;
	PyObject *dep_samba_dcerpc_base;
	PyObject *dep_talloc;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
		return;

	dep_samba_dcerpc_security = PyImport_ImportModule("samba.dcerpc.security");
	if (dep_samba_dcerpc_security == NULL)
		return;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	nfs4ace_Type.tp_base = Object_Type;

	nfs4acl_Type.tp_base = Object_Type;

	nfs4acl_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&nfs4ace_Type) < 0)
		return;
	if (PyType_Ready(&nfs4acl_Type) < 0)
		return;
	if (PyType_Ready(&nfs4acl_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&nfs4acl_InterfaceType, py_ndr_nfs4acl_methods))
		return;

#ifdef PY_NFS4ACE_PATCH
	PY_NFS4ACE_PATCH(&nfs4ace_Type);
#endif
#ifdef PY_NFS4ACL_PATCH
	PY_NFS4ACL_PATCH(&nfs4acl_Type);
#endif
#ifdef PY_NFS4ACL_PATCH
	PY_NFS4ACL_PATCH(&nfs4acl_InterfaceType);
#endif

	m = Py_InitModule3("nfs4acl", nfs4acl_methods, "nfs4acl DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "NFS4ACL_XATTR_EVERYONE_WHO", PyString_FromString("EVERYONE@"));
	PyModule_AddObject(m, "NFS4ACL_XATTR_GROUP_WHO", PyString_FromString("GROUP@"));
	PyModule_AddObject(m, "NFS4ACL_XATTR_NAME", PyString_FromString("system.nfs4acl"));
	PyModule_AddObject(m, "NFS4ACL_XATTR_OWNER_WHO", PyString_FromString("OWNER@"));
	Py_INCREF((PyObject *)(void *)&nfs4ace_Type);
	PyModule_AddObject(m, "nfs4ace", (PyObject *)(void *)&nfs4ace_Type);
	Py_INCREF((PyObject *)(void *)&nfs4acl_Type);
	PyModule_AddObject(m, "nfs4acl", (PyObject *)(void *)&nfs4acl_Type);
	Py_INCREF((PyObject *)(void *)&nfs4acl_InterfaceType);
	PyModule_AddObject(m, "nfs4acl", (PyObject *)(void *)&nfs4acl_InterfaceType);
#ifdef PY_MOD_NFS4ACL_PATCH
	PY_MOD_NFS4ACL_PATCH(m);
#endif

}
