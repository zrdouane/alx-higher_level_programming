#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p) {
    Py_ssize_t size, i;
    PyObject *item;

    size = PyList_Size(p);
    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    for (i = 0; i < size; i++) {
        item = PyList_GetItem(p, i);
        printf("Element %ld: ", i);

        if (PyBytes_Check(item)) {
            printf("bytes\n");
            printf("[.] bytes object info\n");
            printf("  size: %ld\n", PyBytes_Size(item));
            printf("  trying string: %s\n", PyBytes_AsString(item));
            
            printf("  first %ld bytes: ", (PyBytes_Size(item) < 10) ? PyBytes_Size(item) : 10);
            unsigned char *bytes = (unsigned char *)PyBytes_AsString(item);
            for (int j = 0; j < ((PyBytes_Size(item) < 10) ? PyBytes_Size(item) : 10); j++) {
                printf("%02x ", bytes[j]);
            }
            printf("\n");
        } else {
            printf("%s\n", Py_TYPE(item)->tp_name);
        }
    }
}

void print_python_bytes(PyObject *p) {
    Py_ssize_t size;
    unsigned char *bytes;

    printf("[.] bytes object info\n");

    if (!PyBytes_Check(p)) {
        printf("[ERROR] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", PyBytes_AsString(p));

    printf("  first %ld bytes: ", (size < 10) ? size : 10);
    bytes = (unsigned char *)PyBytes_AsString(p);
    for (int i = 0; i < ((size < 10) ? size : 10); i++) {
        printf("%02x ", bytes[i]);
    }
    printf("\n");
}

