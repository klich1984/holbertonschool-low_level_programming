#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: Variable type puntero
 *
 * Return: value string in position j
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
