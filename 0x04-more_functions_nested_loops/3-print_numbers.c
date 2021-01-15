#include "holberton.h"

/**
 * print_numbers - checks for uppercase caracter.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar (n);
	}

	_putchar ('\n');
}
