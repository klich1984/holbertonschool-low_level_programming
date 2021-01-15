#include "holberton.h"

/**
 * print_sign - prints the sign of the number.
 *
 *@n: int is - the value del condition if
 *
 * Return: 1 , 0, -1 depending of the sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
