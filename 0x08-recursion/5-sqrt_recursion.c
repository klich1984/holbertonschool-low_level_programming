#include "holberton.h"

/**
 * _sqrt_recursion - that returns the natural square root of a number
 *
 * raiz - funtion opera the natural square
 *
 * @n: variable integre
 *
 * @i: Variable int
 *
 * Return: -1 if != not have a natural square root
 */

int _raiz(int i, int n);

int _sqrt_recursion(int n)
{

	_raiz(n, 0);

	return (n);

}

/**
 * _raiz - funtion opera the natural square
 *
 * @n: variable integre
 *
 * @i: Variable int
 *
 * Return: value
 */


int _raiz(int i, int n)
{
	if (n < 0)
		return (-1);

	if (i * i == n)
	{
		return (i);
	}

	else if (i * i < n)
	{
		return (_raiz(++i, n));
	}

	else
		return (-1);
}
