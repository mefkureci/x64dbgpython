# Configuration file for Python 3.13.9 (64-bit)

# Define platform and architecture
#define Py_DEBUG
#define PYPY_VERSION 0
#define MS_WIN64
#define _WIN32
#define _WIN64
#define _WIN64_WINNT 0x0A00

# Size of basic types
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_SIZE_T 8
#define SIZEOF_PTRDIFF_T 8

# Other configuration options
#define Py_UNICODE_SIZE 2
#define Py_BYTES_WIDTH 8
#define Py_UNICODE_WIDE 1
#define Py_UNICODE_LITTLE_END 1
#define Py_UNICODE_COMPACT 1

# Memory allocation options
#define PYTHON_ABI "3.13.9"
#define PyCompiler_Flag 0x0008
#define PyAPI_FUNC(type) extern "C" __declspec(dllexport) type __stdcall
#define PyAPI_DATA(type) extern "C" __declspec(dllexport) type
