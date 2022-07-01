/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*                                    COYOTE                                    *
*                          LOW-DENSITY PARITY CHECKING                         *
*                                                                              *
*                        COPYRIGHT (C) 2022 H.E. FRANKS                        *
*                       CAMBRIDGE UNIVERSITY SPACEFLIGHT                       *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <Python.h>
#include <stdio.h>

static PyMethodDef coyotemethods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef coyotemodule = {
    PyModuleDef_HEAD_INIT,
    "coyote",
    "Low-Density Parity Checking.",
    -1,
    coyotemethods
};

PyMODINIT_FUNC PyInit_coyote() { return PyModule_Create(&coyotemodule); }
