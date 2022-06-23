#include "3-calc.h"

/**
  * get_op_func - function pointer that selects correct operator
  *               to perform
  * @s: operator given by user
  *
  * Return: pointer to the function that corresponds to
  *	    the operator given as a parameter
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[j].f);
}
