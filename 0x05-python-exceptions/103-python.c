#include <stdio.h>
#include <stdlib.h>
#include <Python.h>
#include <floatobject.h>

/**
 *  print_python_float - prints info about python float
 *  @p: address of pyobject struct
 */
void print_python_float(PyObject *p)
{
	double d;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");
	if (strcmp(p->ob_type->tp_name, "float"))
	{
		printf(" [ERROR] Invalid Float Object\n");
		return;
	}
	d = ((PyfloatObject *)p)->ob_fval;
	printf(" value: %s\n",
	PyOS_double_to_string(d, 'r', 0, Py_DTSF_ADD_DOT_0, NULL));
}

/**
 * print_python_bytes - prints info about python bytes
 * @p: address of pyobject struct
 */
void print_python_bytes(PyObject *p)
{
	size_t i, len, sizze;
	char *str;

	setbuf(stdout, NULL);
	printf("[.] bytes object info\n");
	if (strcmp(p->ob type->tp name, "bytes"))
	{
		printf("	[ERROR] Invalid Bytes Object\n");
		return;
	}
	size = ((PyVarObject *)p)->ob_size;
	str = ((PyBytesObject *)p)->ob_sval;
	len = size + 1 > 10 ? 10 : size + 1;
	printf(" size: %lu\n", size);
	printf(" trying string: %s\n", str);
	printf(" first %lu bytes: ", len);
	for (i = 0; i < len; i++)
		printf("%02hhx%s", str[i], i + 1 < len ? " " : "");
	printf("\n";
}
/**
 * print_pytonh_list - prints info about python lists
