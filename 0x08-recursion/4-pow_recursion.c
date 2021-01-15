#include "holberton.h"

/**
 * _pow_recursion - that returns the value of x raised to the power of y
 *
 * @x: variable int x
 *
 * @y: variable int y
 *
 * Return: value of the x or y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x = x * _pow_recursion(x, (y - 1)));
}
