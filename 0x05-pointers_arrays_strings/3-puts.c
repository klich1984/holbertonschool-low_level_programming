#include "holberton.h"

/**
 * _puts - Function prints that string.
 *
 * @str: definition variable type pointers
 *
 * Return: value position string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
