#include "3-calc.h"

/**
* get_op_func - selects the correct function to
* perform the operation asked by the user
* @s: Pointer of operator
* Return: a pointer to the function that corresponds
* to the operator given as a parameter
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

	int i = 0;

	while (*s != *ops[i].op)
	{
		i++;

		if (i == 5)
		{
			return (NULL);
		}
	}

	return (ops[i].f);
}
