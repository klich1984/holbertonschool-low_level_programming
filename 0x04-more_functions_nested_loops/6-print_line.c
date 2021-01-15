#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 *@n:  is the number of times the character _ should be printed
 *
 * Return: Noting
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (l = 0; l < n; l++)
		{
			_putchar (95);
		}
	_putchar ('\n');
	}
}
