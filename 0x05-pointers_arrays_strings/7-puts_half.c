#include "holberton.h"

/**
 * puts_half -  prints half of a string.
 *
 * @str: Variable type puntero
 *
 * Return: value string in position j
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != 0)
	{
		i++;
	}

	j = i % 2;

	if (j == 0)
	{
		i = i / 2;
		for (k = i; str[k] != 0; k++)
		{
			_putchar(str[k]);
		}
	}
	else if (j != 0)
	{
		i = (i + 1) / 2;
		for (k = i; str[k] != 0; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
