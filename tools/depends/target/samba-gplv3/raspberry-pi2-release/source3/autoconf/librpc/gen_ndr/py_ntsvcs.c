
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "autoconf/librpc/gen_ndr/ndr_ntsvcs.h"
#include "autoconf/librpc/gen_ndr/ndr_ntsvcs_c.h"

#include "librpc/gen_ndr/misc.h"
staticforward PyTypeObject PNP_HwProfInfo_Type;
staticforward PyTypeObject ntsvcs_InterfaceType;

void initntsvcs(void);static PyTypeObject *ClientConnection_Type;
static PyTypeObject *Object_Type;

static PyObject *py_PNP_HwProfInfo_get_profile_handle(PyObject *obj, void *closure)
{
	struct PNP_HwProfInfo *object = (struct PNP_HwProfInfo *)pytalloc_get_ptr(obj);
	PyObject *py_profile_handle;
	py_profile_handle = PyInt_FromLong(object->profile_handle);
	return py_profile_handle;
}

static int py_PNP_HwProfInfo_set_profile_handle(PyObject *py_obj, PyObject *value, void *closure)
{
	struct PNP_HwProfInfo *object = (struct PNP_HwProfInfo *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->profile_handle = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_PNP_HwProfInfo_get_friendly_name(PyObject *obj, void *closure)
{
	struct PNP_HwProfInfo *object = (struct PNP_HwProfInfo *)pytalloc_get_ptr(obj);
	PyObject *py_friendly_name;
	py_friendly_name = PyList_New(80);
	if (py_friendly_name == NULL) {
		return NULL;
	}
	{
		int friendly_name_cntr_0;
		for (friendly_name_cntr_0 = 0; friendly_name_cntr_0 < 80; friendly_name_cntr_0++) {
			PyObject *py_friendly_name_0;
			py_friendly_name_0 = PyInt_FromLong(object->friendly_name[friendly_name_cntr_0]);
			PyList_SetItem(py_friendly_name, friendly_name_cntr_0, py_friendly_name_0);
		}
	}
	return py_friendly_name;
}

static int py_PNP_HwProfInfo_set_friendly_name(PyObject *py_obj, PyObject *value, void *closure)
{
	struct PNP_HwProfInfo *object = (struct PNP_HwProfInfo *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int friendly_name_cntr_0;
		for (friendly_name_cntr_0 = 0; friendly_name_cntr_0 < PyList_GET_SIZE(value); friendly_name_cntr_0++) {
			PY_CHECK_TYPE(&PyInt_Type, PyList_GET_ITEM(value, friendly_name_cntr_0), return -1;);
			object->friendly_name[friendly_name_cntr_0] = PyInt_AsLong(PyList_GET_ITEM(value, friendly_name_cntr_0));
		}
	}
	return 0;
}

static PyObject *py_PNP_HwProfInfo_get_flags(PyObject *obj, void *closure)
{
	struct PNP_HwProfInfo *object = (struct PNP_HwProfInfo *)pytalloc_get_ptr(obj);
	PyObject *py_flags;
	py_flags = PyInt_FromLong(object->flags);
	return py_flags;
}

static int py_PNP_HwProfInfo_set_flags(PyObject *py_obj, PyObject *value, void *closure)
{
	struct PNP_HwProfInfo *object = (struct PNP_HwProfInfo *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->flags = PyInt_AsLong(value);
	return 0;
}

static PyGetSetDef py_PNP_HwProfInfo_getsetters[] = {
	{ discard_const_p(char, "profile_handle"), py_PNP_HwProfInfo_get_profile_handle, py_PNP_HwProfInfo_set_profile_handle },
	{ discard_const_p(char, "friendly_name"), py_PNP_HwProfInfo_get_friendly_name, py_PNP_HwProfInfo_set_friendly_name },
	{ discard_const_p(char, "flags"), py_PNP_HwProfInfo_get_flags, py_PNP_HwProfInfo_set_flags },
	{ NULL }
};

static PyObject *py_PNP_HwProfInfo_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct PNP_HwProfInfo, type);
}


static PyTypeObject PNP_HwProfInfo_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntsvcs.PNP_HwProfInfo",
	.tp_getset = py_PNP_HwProfInfo_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_PNP_HwProfInfo_new,
};


static bool pack_py_PNP_GetVersion_args_in(PyObject *args, PyObject *kwargs, struct PNP_GetVersion *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":PNP_GetVersion", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_PNP_GetVersion_args_out(struct PNP_GetVersion *r)
{
	PyObject *result;
	PyObject *py_version;
	py_version = PyInt_FromLong(*r->out.version);
	result = py_version;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_PNP_ValidateDeviceInstance_args_in(PyObject *args, PyObject *kwargs, struct PNP_ValidateDeviceInstance *r)
{
	PyObject *py_devicepath;
	PyObject *py_flags;
	const char *kwnames[] = {
		"devicepath", "flags", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:PNP_ValidateDeviceInstance", discard_const_p(char *, kwnames), &py_devicepath, &py_flags)) {
		return false;
	}

	r->in.devicepath = talloc_ptrtype(r, r->in.devicepath);
	if (PyUnicode_Check(py_devicepath)) {
		r->in.devicepath = PyString_AS_STRING(PyUnicode_AsEncodedString(py_devicepath, "utf-8", "ignore"));
	} else if (PyString_Check(py_devicepath)) {
		r->in.devicepath = PyString_AS_STRING(py_devicepath);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_devicepath)->tp_name);
		return false;
	}
	PY_CHECK_TYPE(&PyInt_Type, py_flags, return false;);
	r->in.flags = PyInt_AsLong(py_flags);
	return true;
}

static PyObject *unpack_py_PNP_ValidateDeviceInstance_args_out(struct PNP_ValidateDeviceInstance *r)
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

static bool pack_py_PNP_GetDeviceList_args_in(PyObject *args, PyObject *kwargs, struct PNP_GetDeviceList *r)
{
	PyObject *py_filter;
	PyObject *py_flags;
	const char *kwnames[] = {
		"filter", "flags", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:PNP_GetDeviceList", discard_const_p(char *, kwnames), &py_filter, &py_flags)) {
		return false;
	}

	if (py_filter == Py_None) {
		r->in.filter = NULL;
	} else {
		r->in.filter = NULL;
		if (PyUnicode_Check(py_filter)) {
			r->in.filter = PyString_AS_STRING(PyUnicode_AsEncodedString(py_filter, "utf-8", "ignore"));
		} else if (PyString_Check(py_filter)) {
			r->in.filter = PyString_AS_STRING(py_filter);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_filter)->tp_name);
			return false;
		}
	}
	r->in.length = talloc_ptrtype(r, r->in.length);
	PY_CHECK_TYPE(&PyInt_Type, py_length, return false;);
	*r->in.length = PyInt_AsLong(py_length);
	if (PyLong_Check(py_flags)) {
		r->in.flags = PyLong_AsLongLong(py_flags);
	} else if (PyInt_Check(py_flags)) {
		r->in.flags = PyInt_AsLong(py_flags);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_PNP_GetDeviceList_args_out(struct PNP_GetDeviceList *r)
{
	PyObject *result;
	PyObject *py_buffer;
	py_buffer = PyList_New(*r->out.length);
	if (py_buffer == NULL) {
		return NULL;
	}
	{
		int buffer_cntr_1;
		for (buffer_cntr_1 = 0; buffer_cntr_1 < *r->out.length; buffer_cntr_1++) {
			PyObject *py_buffer_1;
			py_buffer_1 = PyInt_FromLong(r->out.buffer[buffer_cntr_1]);
			PyList_SetItem(py_buffer, buffer_cntr_1, py_buffer_1);
		}
	}
	result = py_buffer;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_PNP_GetDeviceListSize_args_in(PyObject *args, PyObject *kwargs, struct PNP_GetDeviceListSize *r)
{
	PyObject *py_devicename;
	PyObject *py_flags;
	const char *kwnames[] = {
		"devicename", "flags", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:PNP_GetDeviceListSize", discard_const_p(char *, kwnames), &py_devicename, &py_flags)) {
		return false;
	}

	if (py_devicename == Py_None) {
		r->in.devicename = NULL;
	} else {
		r->in.devicename = NULL;
		if (PyUnicode_Check(py_devicename)) {
			r->in.devicename = PyString_AS_STRING(PyUnicode_AsEncodedString(py_devicename, "utf-8", "ignore"));
		} else if (PyString_Check(py_devicename)) {
			r->in.devicename = PyString_AS_STRING(py_devicename);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_devicename)->tp_name);
			return false;
		}
	}
	if (PyLong_Check(py_flags)) {
		r->in.flags = PyLong_AsLongLong(py_flags);
	} else if (PyInt_Check(py_flags)) {
		r->in.flags = PyInt_AsLong(py_flags);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_PNP_GetDeviceListSize_args_out(struct PNP_GetDeviceListSize *r)
{
	PyObject *result;
	PyObject *py_size;
	py_size = PyInt_FromLong(*r->out.size);
	result = py_size;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_PNP_GetDeviceRegProp_args_in(PyObject *args, PyObject *kwargs, struct PNP_GetDeviceRegProp *r)
{
	PyObject *py_devicepath;
	PyObject *py_property;
	PyObject *py_reg_data_type;
	PyObject *py_needed;
	PyObject *py_flags;
	const char *kwnames[] = {
		"devicepath", "property", "reg_data_type", "needed", "flags", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OOOOO:PNP_GetDeviceRegProp", discard_const_p(char *, kwnames), &py_devicepath, &py_property, &py_reg_data_type, &py_needed, &py_flags)) {
		return false;
	}

	r->in.devicepath = talloc_ptrtype(r, r->in.devicepath);
	if (PyUnicode_Check(py_devicepath)) {
		r->in.devicepath = PyString_AS_STRING(PyUnicode_AsEncodedString(py_devicepath, "utf-8", "ignore"));
	} else if (PyString_Check(py_devicepath)) {
		r->in.devicepath = PyString_AS_STRING(py_devicepath);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_devicepath)->tp_name);
		return false;
	}
	PY_CHECK_TYPE(&PyInt_Type, py_property, return false;);
	r->in.property = PyInt_AsLong(py_property);
	r->in.reg_data_type = talloc_ptrtype(r, r->in.reg_data_type);
	if (PyLong_Check(py_reg_data_type)) {
		*r->in.reg_data_type = PyLong_AsLongLong(py_reg_data_type);
	} else if (PyInt_Check(py_reg_data_type)) {
		*r->in.reg_data_type = PyInt_AsLong(py_reg_data_type);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	r->in.buffer_size = talloc_ptrtype(r, r->in.buffer_size);
	PY_CHECK_TYPE(&PyInt_Type, py_buffer_size, return false;);
	*r->in.buffer_size = PyInt_AsLong(py_buffer_size);
	r->in.needed = talloc_ptrtype(r, r->in.needed);
	PY_CHECK_TYPE(&PyInt_Type, py_needed, return false;);
	*r->in.needed = PyInt_AsLong(py_needed);
	PY_CHECK_TYPE(&PyInt_Type, py_flags, return false;);
	r->in.flags = PyInt_AsLong(py_flags);
	return true;
}

static PyObject *unpack_py_PNP_GetDeviceRegProp_args_out(struct PNP_GetDeviceRegProp *r)
{
	PyObject *result;
	PyObject *py_reg_data_type;
	PyObject *py_buffer;
	PyObject *py_needed;
	result = PyTuple_New(3);
	py_reg_data_type = PyInt_FromLong(*r->out.reg_data_type);
	PyTuple_SetItem(result, 0, py_reg_data_type);
	py_buffer = PyList_New(*r->out.buffer_size);
	if (py_buffer == NULL) {
		return NULL;
	}
	{
		int buffer_cntr_1;
		for (buffer_cntr_1 = 0; buffer_cntr_1 < *r->out.buffer_size; buffer_cntr_1++) {
			PyObject *py_buffer_1;
			py_buffer_1 = PyInt_FromLong(r->out.buffer[buffer_cntr_1]);
			PyList_SetItem(py_buffer, buffer_cntr_1, py_buffer_1);
		}
	}
	PyTuple_SetItem(result, 1, py_buffer);
	py_needed = PyInt_FromLong(*r->out.needed);
	PyTuple_SetItem(result, 2, py_needed);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_PNP_HwProfFlags_args_in(PyObject *args, PyObject *kwargs, struct PNP_HwProfFlags *r)
{
	PyObject *py_action;
	PyObject *py_devicepath;
	PyObject *py_config;
	PyObject *py_profile_flags;
	PyObject *py_veto_type;
	PyObject *py_unknown5;
	PyObject *py_name_length;
	PyObject *py_flags;
	const char *kwnames[] = {
		"action", "devicepath", "config", "profile_flags", "veto_type", "unknown5", "name_length", "flags", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OOOOOOOO:PNP_HwProfFlags", discard_const_p(char *, kwnames), &py_action, &py_devicepath, &py_config, &py_profile_flags, &py_veto_type, &py_unknown5, &py_name_length, &py_flags)) {
		return false;
	}

	PY_CHECK_TYPE(&PyInt_Type, py_action, return false;);
	r->in.action = PyInt_AsLong(py_action);
	r->in.devicepath = talloc_ptrtype(r, r->in.devicepath);
	if (PyUnicode_Check(py_devicepath)) {
		r->in.devicepath = PyString_AS_STRING(PyUnicode_AsEncodedString(py_devicepath, "utf-8", "ignore"));
	} else if (PyString_Check(py_devicepath)) {
		r->in.devicepath = PyString_AS_STRING(py_devicepath);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_devicepath)->tp_name);
		return false;
	}
	PY_CHECK_TYPE(&PyInt_Type, py_config, return false;);
	r->in.config = PyInt_AsLong(py_config);
	r->in.profile_flags = talloc_ptrtype(r, r->in.profile_flags);
	PY_CHECK_TYPE(&PyInt_Type, py_profile_flags, return false;);
	*r->in.profile_flags = PyInt_AsLong(py_profile_flags);
	if (py_veto_type == Py_None) {
		r->in.veto_type = NULL;
	} else {
		r->in.veto_type = talloc_ptrtype(r, r->in.veto_type);
		PY_CHECK_TYPE(&PyInt_Type, py_veto_type, return false;);
		*r->in.veto_type = PyInt_AsLong(py_veto_type);
	}
	if (py_unknown5 == Py_None) {
		r->in.unknown5 = NULL;
	} else {
		r->in.unknown5 = NULL;
		if (PyUnicode_Check(py_unknown5)) {
			r->in.unknown5 = PyString_AS_STRING(PyUnicode_AsEncodedString(py_unknown5, "utf-8", "ignore"));
		} else if (PyString_Check(py_unknown5)) {
			r->in.unknown5 = PyString_AS_STRING(py_unknown5);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_unknown5)->tp_name);
			return false;
		}
	}
	PY_CHECK_TYPE(&PyInt_Type, py_name_length, return false;);
	r->in.name_length = PyInt_AsLong(py_name_length);
	PY_CHECK_TYPE(&PyInt_Type, py_flags, return false;);
	r->in.flags = PyInt_AsLong(py_flags);
	return true;
}

static PyObject *unpack_py_PNP_HwProfFlags_args_out(struct PNP_HwProfFlags *r)
{
	PyObject *result;
	PyObject *py_profile_flags;
	PyObject *py_veto_type;
	PyObject *py_unknown5a;
	result = PyTuple_New(3);
	py_profile_flags = PyInt_FromLong(*r->out.profile_flags);
	PyTuple_SetItem(result, 0, py_profile_flags);
	if (r->out.veto_type == NULL) {
		py_veto_type = Py_None;
		Py_INCREF(py_veto_type);
	} else {
		py_veto_type = PyInt_FromLong(*r->out.veto_type);
	}
	PyTuple_SetItem(result, 1, py_veto_type);
	if (r->out.unknown5a == NULL) {
		py_unknown5a = Py_None;
		Py_INCREF(py_unknown5a);
	} else {
		if (*r->out.unknown5a == NULL) {
			py_unknown5a = Py_None;
			Py_INCREF(py_unknown5a);
		} else {
			if (*r->out.unknown5a == NULL) {
				py_unknown5a = Py_None;
				Py_INCREF(py_unknown5a);
			} else {
				py_unknown5a = PyUnicode_Decode(*r->out.unknown5a, strlen(*r->out.unknown5a), "utf-8", "ignore");
			}
		}
	}
	PyTuple_SetItem(result, 2, py_unknown5a);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_PNP_GetHwProfInfo_args_in(PyObject *args, PyObject *kwargs, struct PNP_GetHwProfInfo *r)
{
	PyObject *py_idx;
	PyObject *py_info;
	PyObject *py_size;
	PyObject *py_flags;
	const char *kwnames[] = {
		"idx", "info", "size", "flags", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OOOO:PNP_GetHwProfInfo", discard_const_p(char *, kwnames), &py_idx, &py_info, &py_size, &py_flags)) {
		return false;
	}

	PY_CHECK_TYPE(&PyInt_Type, py_idx, return false;);
	r->in.idx = PyInt_AsLong(py_idx);
	r->in.info = talloc_ptrtype(r, r->in.info);
	PY_CHECK_TYPE(&PNP_HwProfInfo_Type, py_info, return false;);
	if (talloc_reference(r, pytalloc_get_mem_ctx(py_info)) == NULL) {
		PyErr_NoMemory();
		return false;
	}
	r->in.info = (struct PNP_HwProfInfo *)pytalloc_get_ptr(py_info);
	PY_CHECK_TYPE(&PyInt_Type, py_size, return false;);
	r->in.size = PyInt_AsLong(py_size);
	PY_CHECK_TYPE(&PyInt_Type, py_flags, return false;);
	r->in.flags = PyInt_AsLong(py_flags);
	return true;
}

static PyObject *unpack_py_PNP_GetHwProfInfo_args_out(struct PNP_GetHwProfInfo *r)
{
	PyObject *result;
	PyObject *py_info;
	py_info = pytalloc_reference_ex(&PNP_HwProfInfo_Type, r->out.info, r->out.info);
	result = py_info;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_ntsvcs_methods[] = {
	{ "PNP_GetVersion", "S.PNP_GetVersion() -> version", (py_dcerpc_call_fn)dcerpc_PNP_GetVersion_r, (py_data_pack_fn)pack_py_PNP_GetVersion_args_in, (py_data_unpack_fn)unpack_py_PNP_GetVersion_args_out, 2, &ndr_table_ntsvcs },
	{ "PNP_ValidateDeviceInstance", "S.PNP_ValidateDeviceInstance(devicepath, flags) -> None", (py_dcerpc_call_fn)dcerpc_PNP_ValidateDeviceInstance_r, (py_data_pack_fn)pack_py_PNP_ValidateDeviceInstance_args_in, (py_data_unpack_fn)unpack_py_PNP_ValidateDeviceInstance_args_out, 6, &ndr_table_ntsvcs },
	{ "PNP_GetDeviceList", "S.PNP_GetDeviceList(filter, flags) -> buffer", (py_dcerpc_call_fn)dcerpc_PNP_GetDeviceList_r, (py_data_pack_fn)pack_py_PNP_GetDeviceList_args_in, (py_data_unpack_fn)unpack_py_PNP_GetDeviceList_args_out, 10, &ndr_table_ntsvcs },
	{ "PNP_GetDeviceListSize", "S.PNP_GetDeviceListSize(devicename, flags) -> size", (py_dcerpc_call_fn)dcerpc_PNP_GetDeviceListSize_r, (py_data_pack_fn)pack_py_PNP_GetDeviceListSize_args_in, (py_data_unpack_fn)unpack_py_PNP_GetDeviceListSize_args_out, 11, &ndr_table_ntsvcs },
	{ "PNP_GetDeviceRegProp", "S.PNP_GetDeviceRegProp(devicepath, property, reg_data_type, needed, flags) -> (reg_data_type, buffer, needed)", (py_dcerpc_call_fn)dcerpc_PNP_GetDeviceRegProp_r, (py_data_pack_fn)pack_py_PNP_GetDeviceRegProp_args_in, (py_data_unpack_fn)unpack_py_PNP_GetDeviceRegProp_args_out, 13, &ndr_table_ntsvcs },
	{ "PNP_HwProfFlags", "S.PNP_HwProfFlags(action, devicepath, config, profile_flags, veto_type, unknown5, name_length, flags) -> (profile_flags, veto_type, unknown5a)", (py_dcerpc_call_fn)dcerpc_PNP_HwProfFlags_r, (py_data_pack_fn)pack_py_PNP_HwProfFlags_args_in, (py_data_unpack_fn)unpack_py_PNP_HwProfFlags_args_out, 40, &ndr_table_ntsvcs },
	{ "PNP_GetHwProfInfo", "S.PNP_GetHwProfInfo(idx, info, size, flags) -> info", (py_dcerpc_call_fn)dcerpc_PNP_GetHwProfInfo_r, (py_data_pack_fn)pack_py_PNP_GetHwProfInfo_args_in, (py_data_unpack_fn)unpack_py_PNP_GetHwProfInfo_args_out, 41, &ndr_table_ntsvcs },
	{ NULL }
};

static PyObject *interface_ntsvcs_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_ntsvcs);
}

#define PY_DOC_NTSVCS "Plug and Play services"
static PyTypeObject ntsvcs_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntsvcs.ntsvcs",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "ntsvcs(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_NTSVCS,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_ntsvcs_new,
};

static PyMethodDef ntsvcs_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initntsvcs(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_base;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_misc;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	PNP_HwProfInfo_Type.tp_base = Object_Type;

	ntsvcs_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&PNP_HwProfInfo_Type) < 0)
		return;
	if (PyType_Ready(&ntsvcs_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&ntsvcs_InterfaceType, py_ndr_ntsvcs_methods))
		return;

#ifdef PY_PNP_HWPROFINFO_PATCH
	PY_PNP_HWPROFINFO_PATCH(&PNP_HwProfInfo_Type);
#endif
#ifdef PY_NTSVCS_PATCH
	PY_NTSVCS_PATCH(&ntsvcs_InterfaceType);
#endif

	m = Py_InitModule3("ntsvcs", ntsvcs_methods, "ntsvcs DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_EJECTRELATIONS", PyInt_FromLong(CM_GETIDLIST_FILTER_EJECTRELATIONS));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_SERVICE", PyInt_FromLong(CM_GETIDLIST_FILTER_SERVICE));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_POWERRELATIONS", PyInt_FromLong(CM_GETIDLIST_FILTER_POWERRELATIONS));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_NONE", PyInt_FromLong(0x00000000));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_BUSRELATIONS", PyInt_FromLong(CM_GETIDLIST_FILTER_BUSRELATIONS));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_REMOVALRELATIONS", PyInt_FromLong(CM_GETIDLIST_FILTER_REMOVALRELATIONS));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_TRANSPORTRELATIONS", PyInt_FromLong(CM_GETIDLIST_FILTER_TRANSPORTRELATIONS));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_CLASS", PyInt_FromLong(CM_GETIDLIST_FILTER_CLASS));
	PyModule_AddObject(m, "CM_GETIDLIST_DONOTGENERATE", PyInt_FromLong(CM_GETIDLIST_DONOTGENERATE));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_ENUMERATOR", PyInt_FromLong(CM_GETIDLIST_FILTER_ENUMERATOR));
	PyModule_AddObject(m, "CM_GETIDLIST_FILTER_PRESENT", PyInt_FromLong(CM_GETIDLIST_FILTER_PRESENT));
	PyModule_AddObject(m, "DEV_REGPROP_DESC", PyInt_FromLong(1));
	Py_INCREF((PyObject *)(void *)&PNP_HwProfInfo_Type);
	PyModule_AddObject(m, "PNP_HwProfInfo", (PyObject *)(void *)&PNP_HwProfInfo_Type);
	Py_INCREF((PyObject *)(void *)&ntsvcs_InterfaceType);
	PyModule_AddObject(m, "ntsvcs", (PyObject *)(void *)&ntsvcs_InterfaceType);
#ifdef PY_MOD_NTSVCS_PATCH
	PY_MOD_NTSVCS_PATCH(m);
#endif

}
