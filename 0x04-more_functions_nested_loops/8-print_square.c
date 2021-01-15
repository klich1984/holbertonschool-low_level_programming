#include "holberton.h"

/**
 * print_square - prints a square
 *
 *@size: is - the size of the square
 *
 * Return: Noting
 */

void print_square(int size)
{
	int s, ss;

	if (size <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (s = 0; s < size; s++)
		{
			_putchar (35);

			for (ss = 1; ss < size; ss++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
}
