
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "autoconf/librpc/gen_ndr/ndr_mgmt.h"
#include "autoconf/librpc/gen_ndr/ndr_mgmt_c.h"

#include "librpc/gen_ndr/misc.h"
staticforward PyTypeObject ndr_syntax_id_p_Type;
staticforward PyTypeObject rpc_if_id_vector_t_Type;
staticforward PyTypeObject mgmt_statistics_Type;
staticforward PyTypeObject mgmt_InterfaceType;

void initmgmt(void);static PyTypeObject *Object_Type;
static PyTypeObject *ndr_syntax_id_Type;
static PyTypeObject *ClientConnection_Type;

static PyObject *py_ndr_syntax_id_p_get_id(PyObject *obj, void *closure)
{
	struct ndr_syntax_id_p *object = (struct ndr_syntax_id_p *)pytalloc_get_ptr(obj);
	PyObject *py_id;
	if (object->id == NULL) {
		py_id = Py_None;
		Py_INCREF(py_id);
	} else {
		py_id = pytalloc_reference_ex(ndr_syntax_id_Type, object->id, object->id);
	}
	return py_id;
}

static int py_ndr_syntax_id_p_set_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct ndr_syntax_id_p *object = (struct ndr_syntax_id_p *)pytalloc_get_ptr(py_obj);
	talloc_unlink(pytalloc_get_mem_ctx(py_obj), object->id);
	if (value == Py_None) {
		object->id = NULL;
	} else {
		object->id = NULL;
		PY_CHECK_TYPE(ndr_syntax_id_Type, value, return -1;);
		if (talloc_reference(pytalloc_get_mem_ctx(py_obj), pytalloc_get_mem_ctx(value)) == NULL) {
			PyErr_NoMemory();
			return -1;
		}
		object->id = (struct ndr_syntax_id *)pytalloc_get_ptr(value);
	}
	return 0;
}

static PyGetSetDef py_ndr_syntax_id_p_getsetters[] = {
	{ discard_const_p(char, "id"), py_ndr_syntax_id_p_get_id, py_ndr_syntax_id_p_set_id },
	{ NULL }
};

static PyObject *py_ndr_syntax_id_p_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct ndr_syntax_id_p, type);
}


static PyTypeObject ndr_syntax_id_p_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "mgmt.ndr_syntax_id_p",
	.tp_getset = py_ndr_syntax_id_p_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_ndr_syntax_id_p_new,
};


static PyObject *py_rpc_if_id_vector_t_get_count(PyObject *obj, void *closure)
{
	struct rpc_if_id_vector_t *object = (struct rpc_if_id_vector_t *)pytalloc_get_ptr(obj);
	PyObject *py_count;
	py_count = PyInt_FromLong(object->count);
	return py_count;
}

static int py_rpc_if_id_vector_t_set_count(PyObject *py_obj, PyObject *value, void *closure)
{
	struct rpc_if_id_vector_t *object = (struct rpc_if_id_vector_t *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->count = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_rpc_if_id_vector_t_get_if_id(PyObject *obj, void *closure)
{
	struct rpc_if_id_vector_t *object = (struct rpc_if_id_vector_t *)pytalloc_get_ptr(obj);
	PyObject *py_if_id;
	py_if_id = PyList_New(object->count);
	if (py_if_id == NULL) {
		return NULL;
	}
	{
		int if_id_cntr_0;
		for (if_id_cntr_0 = 0; if_id_cntr_0 < object->count; if_id_cntr_0++) {
			PyObject *py_if_id_0;
			py_if_id_0 = pytalloc_reference_ex(&ndr_syntax_id_p_Type, object->if_id, &object->if_id[if_id_cntr_0]);
			PyList_SetItem(py_if_id, if_id_cntr_0, py_if_id_0);
		}
	}
	return py_if_id;
}

static int py_rpc_if_id_vector_t_set_if_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct rpc_if_id_vector_t *object = (struct rpc_if_id_vector_t *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int if_id_cntr_0;
		object->if_id = talloc_array_ptrtype(pytalloc_get_mem_ctx(py_obj), object->if_id, PyList_GET_SIZE(value));
		if (!object->if_id) { return -1;; }
		talloc_set_name_const(object->if_id, "ARRAY: object->if_id");
		for (if_id_cntr_0 = 0; if_id_cntr_0 < PyList_GET_SIZE(value); if_id_cntr_0++) {
			PY_CHECK_TYPE(&ndr_syntax_id_p_Type, PyList_GET_ITEM(value, if_id_cntr_0), return -1;);
			if (talloc_reference(object->if_id, pytalloc_get_mem_ctx(PyList_GET_ITEM(value, if_id_cntr_0))) == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			object->if_id[if_id_cntr_0] = *(struct ndr_syntax_id_p *)pytalloc_get_ptr(PyList_GET_ITEM(value, if_id_cntr_0));
		}
	}
	return 0;
}

static PyGetSetDef py_rpc_if_id_vector_t_getsetters[] = {
	{ discard_const_p(char, "count"), py_rpc_if_id_vector_t_get_count, py_rpc_if_id_vector_t_set_count },
	{ discard_const_p(char, "if_id"), py_rpc_if_id_vector_t_get_if_id, py_rpc_if_id_vector_t_set_if_id },
	{ NULL }
};

static PyObject *py_rpc_if_id_vector_t_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct rpc_if_id_vector_t, type);
}


static PyTypeObject rpc_if_id_vector_t_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "mgmt.rpc_if_id_vector_t",
	.tp_getset = py_rpc_if_id_vector_t_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_rpc_if_id_vector_t_new,
};


static PyObject *py_mgmt_statistics_get_count(PyObject *obj, void *closure)
{
	struct mgmt_statistics *object = (struct mgmt_statistics *)pytalloc_get_ptr(obj);
	PyObject *py_count;
	py_count = PyInt_FromLong(object->count);
	return py_count;
}

static int py_mgmt_statistics_set_count(PyObject *py_obj, PyObject *value, void *closure)
{
	struct mgmt_statistics *object = (struct mgmt_statistics *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->count = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_mgmt_statistics_get_statistics(PyObject *obj, void *closure)
{
	struct mgmt_statistics *object = (struct mgmt_statistics *)pytalloc_get_ptr(obj);
	PyObject *py_statistics;
	py_statistics = PyList_New(object->count);
	if (py_statistics == NULL) {
		return NULL;
	}
	{
		int statistics_cntr_0;
		for (statistics_cntr_0 = 0; statistics_cntr_0 < object->count; statistics_cntr_0++) {
			PyObject *py_statistics_0;
			py_statistics_0 = PyInt_FromLong(object->statistics[statistics_cntr_0]);
			PyList_SetItem(py_statistics, statistics_cntr_0, py_statistics_0);
		}
	}
	return py_statistics;
}

static int py_mgmt_statistics_set_statistics(PyObject *py_obj, PyObject *value, void *closure)
{
	struct mgmt_statistics *object = (struct mgmt_statistics *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int statistics_cntr_0;
		object->statistics = talloc_array_ptrtype(pytalloc_get_mem_ctx(py_obj), object->statistics, PyList_GET_SIZE(value));
		if (!object->statistics) { return -1;; }
		talloc_set_name_const(object->statistics, "ARRAY: object->statistics");
		for (statistics_cntr_0 = 0; statistics_cntr_0 < PyList_GET_SIZE(value); statistics_cntr_0++) {
			PY_CHECK_TYPE(&PyInt_Type, PyList_GET_ITEM(value, statistics_cntr_0), return -1;);
			object->statistics[statistics_cntr_0] = PyInt_AsLong(PyList_GET_ITEM(value, statistics_cntr_0));
		}
	}
	return 0;
}

static PyGetSetDef py_mgmt_statistics_getsetters[] = {
	{ discard_const_p(char, "count"), py_mgmt_statistics_get_count, py_mgmt_statistics_set_count },
	{ discard_const_p(char, "statistics"), py_mgmt_statistics_get_statistics, py_mgmt_statistics_set_statistics },
	{ NULL }
};

static PyObject *py_mgmt_statistics_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct mgmt_statistics, type);
}


static PyTypeObject mgmt_statistics_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "mgmt.statistics",
	.tp_getset = py_mgmt_statistics_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_mgmt_statistics_new,
};


static bool pack_py_mgmt_inq_if_ids_args_in(PyObject *args, PyObject *kwargs, struct mgmt_inq_if_ids *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":mgmt_inq_if_ids", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_mgmt_inq_if_ids_args_out(struct mgmt_inq_if_ids *r)
{
	PyObject *result;
	PyObject *py_if_id_vector;
	if (*r->out.if_id_vector == NULL) {
		py_if_id_vector = Py_None;
		Py_INCREF(py_if_id_vector);
	} else {
		py_if_id_vector = pytalloc_reference_ex(&rpc_if_id_vector_t_Type, *r->out.if_id_vector, *r->out.if_id_vector);
	}
	result = py_if_id_vector;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_mgmt_inq_stats_args_in(PyObject *args, PyObject *kwargs, struct mgmt_inq_stats *r)
{
	PyObject *py_max_count;
	PyObject *py_unknown;
	const char *kwnames[] = {
		"max_count", "unknown", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:mgmt_inq_stats", discard_const_p(char *, kwnames), &py_max_count, &py_unknown)) {
		return false;
	}

	PY_CHECK_TYPE(&PyInt_Type, py_max_count, return false;);
	r->in.max_count = PyInt_AsLong(py_max_count);
	PY_CHECK_TYPE(&PyInt_Type, py_unknown, return false;);
	r->in.unknown = PyInt_AsLong(py_unknown);
	return true;
}

static PyObject *unpack_py_mgmt_inq_stats_args_out(struct mgmt_inq_stats *r)
{
	PyObject *result;
	PyObject *py_statistics;
	py_statistics = pytalloc_reference_ex(&mgmt_statistics_Type, r->out.statistics, r->out.statistics);
	result = py_statistics;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_mgmt_is_server_listening_args_in(PyObject *args, PyObject *kwargs, struct mgmt_is_server_listening *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":mgmt_is_server_listening", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_mgmt_is_server_listening_args_out(struct mgmt_is_server_listening *r)
{
	PyObject *result;
	PyObject *py_status;
	result = PyTuple_New(2);
	py_status = PyInt_FromLong(*r->out.status);
	PyTuple_SetItem(result, 0, py_status);
	PyTuple_SetItem(result, 1, PyInt_FromLong(r->out.result));
	return result;
}

static bool pack_py_mgmt_stop_server_listening_args_in(PyObject *args, PyObject *kwargs, struct mgmt_stop_server_listening *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":mgmt_stop_server_listening", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_mgmt_stop_server_listening_args_out(struct mgmt_stop_server_listening *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_mgmt_inq_princ_name_args_in(PyObject *args, PyObject *kwargs, struct mgmt_inq_princ_name *r)
{
	PyObject *py_authn_proto;
	PyObject *py_princ_name_size;
	const char *kwnames[] = {
		"authn_proto", "princ_name_size", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:mgmt_inq_princ_name", discard_const_p(char *, kwnames), &py_authn_proto, &py_princ_name_size)) {
		return false;
	}

	PY_CHECK_TYPE(&PyInt_Type, py_authn_proto, return false;);
	r->in.authn_proto = PyInt_AsLong(py_authn_proto);
	PY_CHECK_TYPE(&PyInt_Type, py_princ_name_size, return false;);
	r->in.princ_name_size = PyInt_AsLong(py_princ_name_size);
	return true;
}

static PyObject *unpack_py_mgmt_inq_princ_name_args_out(struct mgmt_inq_princ_name *r)
{
	PyObject *result;
	PyObject *py_princ_name;
	if (r->out.princ_name == NULL) {
		py_princ_name = Py_None;
		Py_INCREF(py_princ_name);
	} else {
		py_princ_name = PyUnicode_Decode(r->out.princ_name, strlen(r->out.princ_name), "utf-8", "ignore");
	}
	result = py_princ_name;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_mgmt_methods[] = {
	{ "inq_if_ids", "S.inq_if_ids() -> if_id_vector", (py_dcerpc_call_fn)dcerpc_mgmt_inq_if_ids_r, (py_data_pack_fn)pack_py_mgmt_inq_if_ids_args_in, (py_data_unpack_fn)unpack_py_mgmt_inq_if_ids_args_out, 0, &ndr_table_mgmt },
	{ "inq_stats", "S.inq_stats(max_count, unknown) -> statistics", (py_dcerpc_call_fn)dcerpc_mgmt_inq_stats_r, (py_data_pack_fn)pack_py_mgmt_inq_stats_args_in, (py_data_unpack_fn)unpack_py_mgmt_inq_stats_args_out, 1, &ndr_table_mgmt },
	{ "is_server_listening", "S.is_server_listening() -> (status, result)", (py_dcerpc_call_fn)dcerpc_mgmt_is_server_listening_r, (py_data_pack_fn)pack_py_mgmt_is_server_listening_args_in, (py_data_unpack_fn)unpack_py_mgmt_is_server_listening_args_out, 2, &ndr_table_mgmt },
	{ "stop_server_listening", "S.stop_server_listening() -> None", (py_dcerpc_call_fn)dcerpc_mgmt_stop_server_listening_r, (py_data_pack_fn)pack_py_mgmt_stop_server_listening_args_in, (py_data_unpack_fn)unpack_py_mgmt_stop_server_listening_args_out, 3, &ndr_table_mgmt },
	{ "inq_princ_name", "S.inq_princ_name(authn_proto, princ_name_size) -> princ_name", (py_dcerpc_call_fn)dcerpc_mgmt_inq_princ_name_r, (py_data_pack_fn)pack_py_mgmt_inq_princ_name_args_in, (py_data_unpack_fn)unpack_py_mgmt_inq_princ_name_args_out, 4, &ndr_table_mgmt },
	{ NULL }
};

static PyObject *interface_mgmt_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_mgmt);
}

#define PY_DOC_MGMT "DCE/RPC Remote Management"
static PyTypeObject mgmt_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "mgmt.mgmt",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "mgmt(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_MGMT,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_mgmt_new,
};

static PyMethodDef mgmt_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initmgmt(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_misc;
	PyObject *dep_samba_dcerpc_base;
	PyObject *dep_talloc;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
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

	ndr_syntax_id_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_misc, "ndr_syntax_id");
	if (ndr_syntax_id_Type == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	ndr_syntax_id_p_Type.tp_base = Object_Type;

	rpc_if_id_vector_t_Type.tp_base = Object_Type;

	mgmt_statistics_Type.tp_base = Object_Type;

	mgmt_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&ndr_syntax_id_p_Type) < 0)
		return;
	if (PyType_Ready(&rpc_if_id_vector_t_Type) < 0)
		return;
	if (PyType_Ready(&mgmt_statistics_Type) < 0)
		return;
	if (PyType_Ready(&mgmt_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&mgmt_InterfaceType, py_ndr_mgmt_methods))
		return;

#ifdef PY_NDR_SYNTAX_ID_P_PATCH
	PY_NDR_SYNTAX_ID_P_PATCH(&ndr_syntax_id_p_Type);
#endif
#ifdef PY_RPC_IF_ID_VECTOR_T_PATCH
	PY_RPC_IF_ID_VECTOR_T_PATCH(&rpc_if_id_vector_t_Type);
#endif
#ifdef PY_STATISTICS_PATCH
	PY_STATISTICS_PATCH(&mgmt_statistics_Type);
#endif
#ifdef PY_MGMT_PATCH
	PY_MGMT_PATCH(&mgmt_InterfaceType);
#endif

	m = Py_InitModule3("mgmt", mgmt_methods, "mgmt DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "MGMT_STATS_PKTS_OUT", PyInt_FromLong(3));
	PyModule_AddObject(m, "MGMT_STATS_CALLS_OUT", PyInt_FromLong(1));
	PyModule_AddObject(m, "MGMT_STATS_ARRAY_MAX_SIZE", PyInt_FromLong(4));
	PyModule_AddObject(m, "MGMT_STATS_PKTS_IN", PyInt_FromLong(2));
	PyModule_AddObject(m, "MGMT_STATS_CALLS_IN", PyInt_FromLong(0));
	Py_INCREF((PyObject *)(void *)&ndr_syntax_id_p_Type);
	PyModule_AddObject(m, "ndr_syntax_id_p", (PyObject *)(void *)&ndr_syntax_id_p_Type);
	Py_INCREF((PyObject *)(void *)&rpc_if_id_vector_t_Type);
	PyModule_AddObject(m, "rpc_if_id_vector_t", (PyObject *)(void *)&rpc_if_id_vector_t_Type);
	Py_INCREF((PyObject *)(void *)&mgmt_statistics_Type);
	PyModule_AddObject(m, "statistics", (PyObject *)(void *)&mgmt_statistics_Type);
	Py_INCREF((PyObject *)(void *)&mgmt_InterfaceType);
	PyModule_AddObject(m, "mgmt", (PyObject *)(void *)&mgmt_InterfaceType);
#ifdef PY_MOD_MGMT_PATCH
	PY_MOD_MGMT_PATCH(m);
#endif

}
