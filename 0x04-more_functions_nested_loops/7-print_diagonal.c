#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 *@n: int is - number of times the character \ should be printed
 *
 * Return: noting
 */

void print_diagonal(int n)
{
	int l, ll;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (l = 0; l < n; l++)
		{
			for (ll = 0; ll < l; ll++)
			{
				_putchar (32);
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
}
