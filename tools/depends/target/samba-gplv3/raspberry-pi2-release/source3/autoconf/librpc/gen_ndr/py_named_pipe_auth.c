
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "autoconf/librpc/gen_ndr/ndr_named_pipe_auth.h"
#include "autoconf/librpc/gen_ndr/ndr_named_pipe_auth_c.h"

#include "librpc/gen_ndr/netlogon.h"
#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/auth.h"
staticforward PyTypeObject named_pipe_auth_req_info4_Type;
staticforward PyTypeObject named_pipe_auth_req_Type;
staticforward PyTypeObject named_pipe_auth_rep_info4_Type;
staticforward PyTypeObject named_pipe_auth_rep_Type;

void initnamed_pipe_auth(void);static PyTypeObject *Object_Type;
static PyTypeObject *auth_session_info_transport_Type;

static PyObject *py_named_pipe_auth_req_info4_get_client_name(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_client_name;
	if (object->client_name == NULL) {
		py_client_name = Py_None;
		Py_INCREF(py_client_name);
	} else {
		if (object->client_name == NULL) {
			py_client_name = Py_None;
			Py_INCREF(py_client_name);
		} else {
			py_client_name = PyUnicode_Decode(object->client_name, strlen(object->client_name), "utf-8", "ignore");
		}
	}
	return py_client_name;
}

static int py_named_pipe_auth_req_info4_set_client_name(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->client_name = NULL;
	} else {
		object->client_name = NULL;
		if (PyUnicode_Check(value)) {
			object->client_name = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->client_name = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_named_pipe_auth_req_info4_get_client_addr(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_client_addr;
	if (object->client_addr == NULL) {
		py_client_addr = Py_None;
		Py_INCREF(py_client_addr);
	} else {
		if (object->client_addr == NULL) {
			py_client_addr = Py_None;
			Py_INCREF(py_client_addr);
		} else {
			py_client_addr = PyUnicode_Decode(object->client_addr, strlen(object->client_addr), "utf-8", "ignore");
		}
	}
	return py_client_addr;
}

static int py_named_pipe_auth_req_info4_set_client_addr(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->client_addr = NULL;
	} else {
		object->client_addr = NULL;
		if (PyUnicode_Check(value)) {
			object->client_addr = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->client_addr = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_named_pipe_auth_req_info4_get_client_port(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_client_port;
	py_client_port = PyInt_FromLong(object->client_port);
	return py_client_port;
}

static int py_named_pipe_auth_req_info4_set_client_port(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->client_port = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_req_info4_get_server_name(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_server_name;
	if (object->server_name == NULL) {
		py_server_name = Py_None;
		Py_INCREF(py_server_name);
	} else {
		if (object->server_name == NULL) {
			py_server_name = Py_None;
			Py_INCREF(py_server_name);
		} else {
			py_server_name = PyUnicode_Decode(object->server_name, strlen(object->server_name), "utf-8", "ignore");
		}
	}
	return py_server_name;
}

static int py_named_pipe_auth_req_info4_set_server_name(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->server_name = NULL;
	} else {
		object->server_name = NULL;
		if (PyUnicode_Check(value)) {
			object->server_name = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->server_name = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_named_pipe_auth_req_info4_get_server_addr(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_server_addr;
	if (object->server_addr == NULL) {
		py_server_addr = Py_None;
		Py_INCREF(py_server_addr);
	} else {
		if (object->server_addr == NULL) {
			py_server_addr = Py_None;
			Py_INCREF(py_server_addr);
		} else {
			py_server_addr = PyUnicode_Decode(object->server_addr, strlen(object->server_addr), "utf-8", "ignore");
		}
	}
	return py_server_addr;
}

static int py_named_pipe_auth_req_info4_set_server_addr(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->server_addr = NULL;
	} else {
		object->server_addr = NULL;
		if (PyUnicode_Check(value)) {
			object->server_addr = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->server_addr = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_named_pipe_auth_req_info4_get_server_port(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_server_port;
	py_server_port = PyInt_FromLong(object->server_port);
	return py_server_port;
}

static int py_named_pipe_auth_req_info4_set_server_port(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->server_port = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_req_info4_get_session_info(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_session_info;
	if (object->session_info == NULL) {
		py_session_info = Py_None;
		Py_INCREF(py_session_info);
	} else {
		py_session_info = pytalloc_reference_ex(auth_session_info_transport_Type, object->session_info, object->session_info);
	}
	return py_session_info;
}

static int py_named_pipe_auth_req_info4_set_session_info(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req_info4 *object = (struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(py_obj);
	talloc_unlink(pytalloc_get_mem_ctx(py_obj), object->session_info);
	if (value == Py_None) {
		object->session_info = NULL;
	} else {
		object->session_info = NULL;
		PY_CHECK_TYPE(auth_session_info_transport_Type, value, return -1;);
		if (talloc_reference(pytalloc_get_mem_ctx(py_obj), pytalloc_get_mem_ctx(value)) == NULL) {
			PyErr_NoMemory();
			return -1;
		}
		object->session_info = (struct auth_session_info_transport *)pytalloc_get_ptr(value);
	}
	return 0;
}

static PyGetSetDef py_named_pipe_auth_req_info4_getsetters[] = {
	{ discard_const_p(char, "client_name"), py_named_pipe_auth_req_info4_get_client_name, py_named_pipe_auth_req_info4_set_client_name },
	{ discard_const_p(char, "client_addr"), py_named_pipe_auth_req_info4_get_client_addr, py_named_pipe_auth_req_info4_set_client_addr },
	{ discard_const_p(char, "client_port"), py_named_pipe_auth_req_info4_get_client_port, py_named_pipe_auth_req_info4_set_client_port },
	{ discard_const_p(char, "server_name"), py_named_pipe_auth_req_info4_get_server_name, py_named_pipe_auth_req_info4_set_server_name },
	{ discard_const_p(char, "server_addr"), py_named_pipe_auth_req_info4_get_server_addr, py_named_pipe_auth_req_info4_set_server_addr },
	{ discard_const_p(char, "server_port"), py_named_pipe_auth_req_info4_get_server_port, py_named_pipe_auth_req_info4_set_server_port },
	{ discard_const_p(char, "session_info"), py_named_pipe_auth_req_info4_get_session_info, py_named_pipe_auth_req_info4_set_session_info },
	{ NULL }
};

static PyObject *py_named_pipe_auth_req_info4_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct named_pipe_auth_req_info4, type);
}


static PyTypeObject named_pipe_auth_req_info4_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "named_pipe_auth.req_info4",
	.tp_getset = py_named_pipe_auth_req_info4_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_named_pipe_auth_req_info4_new,
};

PyObject *py_import_named_pipe_auth_req_info(TALLOC_CTX *mem_ctx, int level, union named_pipe_auth_req_info *in)
{
	PyObject *ret;

	switch (level) {
		case 4:
			ret = pytalloc_reference_ex(&named_pipe_auth_req_info4_Type, mem_ctx, &in->info4);
			return ret;

	}
	PyErr_SetString(PyExc_TypeError, "unknown union level");
	return NULL;
}

union named_pipe_auth_req_info *py_export_named_pipe_auth_req_info(TALLOC_CTX *mem_ctx, int level, PyObject *in)
{
	union named_pipe_auth_req_info *ret = talloc_zero(mem_ctx, union named_pipe_auth_req_info);
	switch (level) {
		case 4:
			PY_CHECK_TYPE(&named_pipe_auth_req_info4_Type, in, talloc_free(ret); return NULL;);
			if (talloc_reference(mem_ctx, pytalloc_get_mem_ctx(in)) == NULL) {
				PyErr_NoMemory();
				talloc_free(ret); return NULL;
			}
			ret->info4 = *(struct named_pipe_auth_req_info4 *)pytalloc_get_ptr(in);
			break;

		default:
			PyErr_SetString(PyExc_TypeError, "invalid union level value");
			talloc_free(ret);
			ret = NULL;
	}

	return ret;
}


static PyObject *py_named_pipe_auth_req_get_length(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(obj);
	PyObject *py_length;
	py_length = PyInt_FromLong(object->length);
	return py_length;
}

static int py_named_pipe_auth_req_set_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->length = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_req_get_magic(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(obj);
	PyObject *py_magic;
	if (object->magic == NULL) {
		py_magic = Py_None;
		Py_INCREF(py_magic);
	} else {
		py_magic = PyUnicode_Decode(object->magic, strlen(object->magic), "utf-8", "ignore");
	}
	return py_magic;
}

static int py_named_pipe_auth_req_set_magic(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
	if (PyUnicode_Check(value)) {
		object->magic = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
	} else if (PyString_Check(value)) {
		object->magic = PyString_AS_STRING(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_named_pipe_auth_req_get_level(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(obj);
	PyObject *py_level;
	py_level = PyInt_FromLong(object->level);
	return py_level;
}

static int py_named_pipe_auth_req_set_level(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->level = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_req_get_info(PyObject *obj, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(obj);
	PyObject *py_info;
	py_info = py_import_named_pipe_auth_req_info(pytalloc_get_mem_ctx(obj), object->level, &object->info);
	if (py_info == NULL) {
		return NULL;
	}
	return py_info;
}

static int py_named_pipe_auth_req_set_info(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
	{
		union named_pipe_auth_req_info *info_switch_0;
		info_switch_0 = py_export_named_pipe_auth_req_info(pytalloc_get_mem_ctx(py_obj), object->level, value);
		if (info_switch_0 == NULL) {
			return -1;
		}
		object->info = *info_switch_0;
	}
	return 0;
}

static PyGetSetDef py_named_pipe_auth_req_getsetters[] = {
	{ discard_const_p(char, "length"), py_named_pipe_auth_req_get_length, py_named_pipe_auth_req_set_length },
	{ discard_const_p(char, "magic"), py_named_pipe_auth_req_get_magic, py_named_pipe_auth_req_set_magic },
	{ discard_const_p(char, "level"), py_named_pipe_auth_req_get_level, py_named_pipe_auth_req_set_level },
	{ discard_const_p(char, "info"), py_named_pipe_auth_req_get_info, py_named_pipe_auth_req_set_info },
	{ NULL }
};

static PyObject *py_named_pipe_auth_req_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct named_pipe_auth_req, type);
}

static PyObject *py_named_pipe_auth_req_ndr_pack(PyObject *py_obj)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	enum ndr_err_code err;
	err = ndr_push_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_push_flags_fn_t)ndr_push_named_pipe_auth_req);
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	return PyString_FromStringAndSize((char *)blob.data, blob.length);
}

static PyObject *py_named_pipe_auth_req_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
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
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_named_pipe_auth_req);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_named_pipe_auth_req);
	}
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_named_pipe_auth_req_ndr_print(PyObject *py_obj)
{
	struct named_pipe_auth_req *object = (struct named_pipe_auth_req *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_named_pipe_auth_req, "named_pipe_auth_req", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_named_pipe_auth_req_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_named_pipe_auth_req_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_named_pipe_auth_req_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_named_pipe_auth_req_ndr_print, METH_VARARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject named_pipe_auth_req_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "named_pipe_auth.req",
	.tp_getset = py_named_pipe_auth_req_getsetters,
	.tp_methods = py_named_pipe_auth_req_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_named_pipe_auth_req_new,
};


static PyObject *py_named_pipe_auth_rep_info4_get_file_type(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep_info4 *object = (struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_file_type;
	py_file_type = PyInt_FromLong(object->file_type);
	return py_file_type;
}

static int py_named_pipe_auth_rep_info4_set_file_type(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep_info4 *object = (struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->file_type = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_rep_info4_get_device_state(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep_info4 *object = (struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_device_state;
	py_device_state = PyInt_FromLong(object->device_state);
	return py_device_state;
}

static int py_named_pipe_auth_rep_info4_set_device_state(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep_info4 *object = (struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->device_state = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_rep_info4_get_allocation_size(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep_info4 *object = (struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(obj);
	PyObject *py_allocation_size;
	py_allocation_size = PyLong_FromLongLong(object->allocation_size);
	return py_allocation_size;
}

static int py_named_pipe_auth_rep_info4_set_allocation_size(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep_info4 *object = (struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->allocation_size = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->allocation_size = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyGetSetDef py_named_pipe_auth_rep_info4_getsetters[] = {
	{ discard_const_p(char, "file_type"), py_named_pipe_auth_rep_info4_get_file_type, py_named_pipe_auth_rep_info4_set_file_type },
	{ discard_const_p(char, "device_state"), py_named_pipe_auth_rep_info4_get_device_state, py_named_pipe_auth_rep_info4_set_device_state },
	{ discard_const_p(char, "allocation_size"), py_named_pipe_auth_rep_info4_get_allocation_size, py_named_pipe_auth_rep_info4_set_allocation_size },
	{ NULL }
};

static PyObject *py_named_pipe_auth_rep_info4_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct named_pipe_auth_rep_info4, type);
}


static PyTypeObject named_pipe_auth_rep_info4_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "named_pipe_auth.rep_info4",
	.tp_getset = py_named_pipe_auth_rep_info4_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_named_pipe_auth_rep_info4_new,
};

PyObject *py_import_named_pipe_auth_rep_info(TALLOC_CTX *mem_ctx, int level, union named_pipe_auth_rep_info *in)
{
	PyObject *ret;

	switch (level) {
		case 4:
			ret = pytalloc_reference_ex(&named_pipe_auth_rep_info4_Type, mem_ctx, &in->info4);
			return ret;

	}
	PyErr_SetString(PyExc_TypeError, "unknown union level");
	return NULL;
}

union named_pipe_auth_rep_info *py_export_named_pipe_auth_rep_info(TALLOC_CTX *mem_ctx, int level, PyObject *in)
{
	union named_pipe_auth_rep_info *ret = talloc_zero(mem_ctx, union named_pipe_auth_rep_info);
	switch (level) {
		case 4:
			PY_CHECK_TYPE(&named_pipe_auth_rep_info4_Type, in, talloc_free(ret); return NULL;);
			if (talloc_reference(mem_ctx, pytalloc_get_mem_ctx(in)) == NULL) {
				PyErr_NoMemory();
				talloc_free(ret); return NULL;
			}
			ret->info4 = *(struct named_pipe_auth_rep_info4 *)pytalloc_get_ptr(in);
			break;

		default:
			PyErr_SetString(PyExc_TypeError, "invalid union level value");
			talloc_free(ret);
			ret = NULL;
	}

	return ret;
}


static PyObject *py_named_pipe_auth_rep_get_length(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(obj);
	PyObject *py_length;
	py_length = PyInt_FromLong(object->length);
	return py_length;
}

static int py_named_pipe_auth_rep_set_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->length = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_rep_get_magic(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(obj);
	PyObject *py_magic;
	if (object->magic == NULL) {
		py_magic = Py_None;
		Py_INCREF(py_magic);
	} else {
		py_magic = PyUnicode_Decode(object->magic, strlen(object->magic), "utf-8", "ignore");
	}
	return py_magic;
}

static int py_named_pipe_auth_rep_set_magic(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	if (PyUnicode_Check(value)) {
		object->magic = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
	} else if (PyString_Check(value)) {
		object->magic = PyString_AS_STRING(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_named_pipe_auth_rep_get_level(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(obj);
	PyObject *py_level;
	py_level = PyInt_FromLong(object->level);
	return py_level;
}

static int py_named_pipe_auth_rep_set_level(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->level = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_named_pipe_auth_rep_get_info(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(obj);
	PyObject *py_info;
	py_info = py_import_named_pipe_auth_rep_info(pytalloc_get_mem_ctx(obj), object->level, &object->info);
	if (py_info == NULL) {
		return NULL;
	}
	return py_info;
}

static int py_named_pipe_auth_rep_set_info(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	{
		union named_pipe_auth_rep_info *info_switch_0;
		info_switch_0 = py_export_named_pipe_auth_rep_info(pytalloc_get_mem_ctx(py_obj), object->level, value);
		if (info_switch_0 == NULL) {
			return -1;
		}
		object->info = *info_switch_0;
	}
	return 0;
}

static PyObject *py_named_pipe_auth_rep_get_status(PyObject *obj, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(obj);
	PyObject *py_status;
	py_status = PyErr_FromNTSTATUS(object->status);
	return py_status;
}

static int py_named_pipe_auth_rep_set_status(PyObject *py_obj, PyObject *value, void *closure)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	object->status = NT_STATUS(PyInt_AsLong(value));
	return 0;
}

static PyGetSetDef py_named_pipe_auth_rep_getsetters[] = {
	{ discard_const_p(char, "length"), py_named_pipe_auth_rep_get_length, py_named_pipe_auth_rep_set_length },
	{ discard_const_p(char, "magic"), py_named_pipe_auth_rep_get_magic, py_named_pipe_auth_rep_set_magic },
	{ discard_const_p(char, "level"), py_named_pipe_auth_rep_get_level, py_named_pipe_auth_rep_set_level },
	{ discard_const_p(char, "info"), py_named_pipe_auth_rep_get_info, py_named_pipe_auth_rep_set_info },
	{ discard_const_p(char, "status"), py_named_pipe_auth_rep_get_status, py_named_pipe_auth_rep_set_status },
	{ NULL }
};

static PyObject *py_named_pipe_auth_rep_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct named_pipe_auth_rep, type);
}

static PyObject *py_named_pipe_auth_rep_ndr_pack(PyObject *py_obj)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	enum ndr_err_code err;
	err = ndr_push_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_push_flags_fn_t)ndr_push_named_pipe_auth_rep);
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	return PyString_FromStringAndSize((char *)blob.data, blob.length);
}

static PyObject *py_named_pipe_auth_rep_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
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
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_named_pipe_auth_rep);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_named_pipe_auth_rep);
	}
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_named_pipe_auth_rep_ndr_print(PyObject *py_obj)
{
	struct named_pipe_auth_rep *object = (struct named_pipe_auth_rep *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_named_pipe_auth_rep, "named_pipe_auth_rep", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_named_pipe_auth_rep_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_named_pipe_auth_rep_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_named_pipe_auth_rep_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_named_pipe_auth_rep_ndr_print, METH_VARARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject named_pipe_auth_rep_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "named_pipe_auth.rep",
	.tp_getset = py_named_pipe_auth_rep_getsetters,
	.tp_methods = py_named_pipe_auth_rep_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_named_pipe_auth_rep_new,
};

static PyMethodDef named_pipe_auth_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initnamed_pipe_auth(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_netlogon;
	PyObject *dep_samba_dcerpc_security;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_auth;

	dep_samba_dcerpc_netlogon = PyImport_ImportModule("samba.dcerpc.netlogon");
	if (dep_samba_dcerpc_netlogon == NULL)
		return;

	dep_samba_dcerpc_security = PyImport_ImportModule("samba.dcerpc.security");
	if (dep_samba_dcerpc_security == NULL)
		return;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	dep_samba_dcerpc_auth = PyImport_ImportModule("samba.dcerpc.auth");
	if (dep_samba_dcerpc_auth == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	auth_session_info_transport_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_auth, "session_info_transport");
	if (auth_session_info_transport_Type == NULL)
		return;

	named_pipe_auth_req_info4_Type.tp_base = Object_Type;

	named_pipe_auth_req_Type.tp_base = Object_Type;

	named_pipe_auth_rep_info4_Type.tp_base = Object_Type;

	named_pipe_auth_rep_Type.tp_base = Object_Type;

	if (PyType_Ready(&named_pipe_auth_req_info4_Type) < 0)
		return;
	if (PyType_Ready(&named_pipe_auth_req_Type) < 0)
		return;
	if (PyType_Ready(&named_pipe_auth_rep_info4_Type) < 0)
		return;
	if (PyType_Ready(&named_pipe_auth_rep_Type) < 0)
		return;
#ifdef PY_REQ_INFO4_PATCH
	PY_REQ_INFO4_PATCH(&named_pipe_auth_req_info4_Type);
#endif
#ifdef PY_REQ_PATCH
	PY_REQ_PATCH(&named_pipe_auth_req_Type);
#endif
#ifdef PY_REP_INFO4_PATCH
	PY_REP_INFO4_PATCH(&named_pipe_auth_rep_info4_Type);
#endif
#ifdef PY_REP_PATCH
	PY_REP_PATCH(&named_pipe_auth_rep_Type);
#endif

	m = Py_InitModule3("named_pipe_auth", named_pipe_auth_methods, "named_pipe_auth DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "NAMED_PIPE_AUTH_MAGIC", PyString_FromString("NPAM"));
	Py_INCREF((PyObject *)(void *)&named_pipe_auth_req_info4_Type);
	PyModule_AddObject(m, "req_info4", (PyObject *)(void *)&named_pipe_auth_req_info4_Type);
	Py_INCREF((PyObject *)(void *)&named_pipe_auth_req_Type);
	PyModule_AddObject(m, "req", (PyObject *)(void *)&named_pipe_auth_req_Type);
	Py_INCREF((PyObject *)(void *)&named_pipe_auth_rep_info4_Type);
	PyModule_AddObject(m, "rep_info4", (PyObject *)(void *)&named_pipe_auth_rep_info4_Type);
	Py_INCREF((PyObject *)(void *)&named_pipe_auth_rep_Type);
	PyModule_AddObject(m, "rep", (PyObject *)(void *)&named_pipe_auth_rep_Type);
#ifdef PY_MOD_NAMED_PIPE_AUTH_PATCH
	PY_MOD_NAMED_PIPE_AUTH_PATCH(m);
#endif

}
