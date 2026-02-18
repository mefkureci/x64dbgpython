/*
 * pyconfig.h
 * Configuration header for Python 3.13 on Windows (32-bit)
 */

#ifndef Py_CONFIG_H
#define Py_CONFIG_H

/* For 32-bit Windows */
#define SIZEOF_SHORT 2
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8

/* Configuration values */
#define Py_DEBUG 0
#define WITH_PYMALLOC 1
#define WITH_THREAD 1
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_UNISTD_H 0
#define HAVE_STRING_H 1
#define HAVE_STDDEF_H 1

/* Add other configurations as necessary */

#endif // Py_CONFIG_H
