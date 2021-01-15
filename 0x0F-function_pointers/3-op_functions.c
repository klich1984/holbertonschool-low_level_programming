#include "3-calc.h"

/**
* op_add - sum of a and b
* @a: - variable integer
* @b: - variable integer
* Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of a and b
* @a: - variable integer
* @b: - variable integer
* Return: difference of a a b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - products of a and b
* @a: - variable integer
* @b: - variable integer
* Return: products of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division of a by b
* @a: - variable integer
* @b: - variable integer
* Return: the result of the division of a by b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (100);
	}

	else
	{
		return (a / b);
	}
}

/**
* op_mod - modulo of a by b
* @a: - variable integer
* @b: - variable integer
* Return: remainder of the division of a by b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (100);
	}

	else
	{
		return (a % b);
	}
}
