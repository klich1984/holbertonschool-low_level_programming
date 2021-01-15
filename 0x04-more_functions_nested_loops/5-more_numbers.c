#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 *
 * Return: noting
 */

void more_numbers(void)
{
	int c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{

			if (n >= 10)
			{
				_putchar ((n / 10) + '0');
			}
			_putchar ((n % 10) + '0');
		}

		_putchar ('\n');
	}
}
