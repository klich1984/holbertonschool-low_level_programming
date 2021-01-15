#include "holberton.h"

/**
* print_binary - function that prints the binary representation of a number.
* @n: integer to convert
* Return: Noting
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 4611686018427387904;
	int i = 0;

	while ((mask & n) != mask)
	{
		mask = mask >> 1;
		i++;
	}

	while (i < 63)
	{

		if (mask == (mask & n))
			_putchar('1');

		else
			_putchar('0');

		mask = mask >> 1;
		i++;
	}
	if (n == 0)
	_putchar('0');
}
