#ifndef CLP_FFI_PY_IR_NATIVE_SERIALIZATION_METHODS
#define CLP_FFI_PY_IR_NATIVE_SERIALIZATION_METHODS

#include <clp_ffi_py/Python.hpp>  // Must always be included before any other header files

// Documentation for these methods is in clp_ffi_py/ir/native/PyFourByteSerializer.cpp, as it also
// serves as the documentation for python.
namespace clp_ffi_py::ir::native {
auto serialize_four_byte_preamble(PyObject* self, PyObject* args) -> PyObject*;
auto serialize_four_byte_message_and_timestamp_delta(PyObject* self, PyObject* args) -> PyObject*;
auto serialize_four_byte_message(PyObject* self, PyObject* args) -> PyObject*;
auto serialize_four_byte_timestamp_delta(PyObject* self, PyObject* args) -> PyObject*;
auto serialize_end_of_ir(PyObject* self) -> PyObject*;
}  // namespace clp_ffi_py::ir::native

#endif  // CLP_FFI_PY_IR_NATIVE_SERIALIZATION_METHODS
