#include "3-calc.h"
#include <stdlib.h>

/**
  * get_op_func - selects correct function to perform operation
  * based on user input
  * @s: The operator passed as argument
  * Return: Pointer to the function in correlation to
  * operator given as a parameter.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int p = 0;

	while (ops[p].op != NULL && *(ops[p].op) != *s)
		p++;

	return (ops[p].f);
}
