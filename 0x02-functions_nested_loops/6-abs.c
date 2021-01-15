#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 *@a: The result of the absolute value
 *
 * Return: absolute value
 */

int _abs(int a)
{
	int aV;

	if (a >= 0)
	{
		aV = a;
	}

	else
	{
		aV = a * -1;
	}

	return (aV);
}
