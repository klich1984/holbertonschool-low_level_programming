#include "holberton.h"

/**
 * print_alphabet_x10 - in lowercase.
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	int con = 0;

	while (con <= 9)
	{
		char abc;

		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar (abc);
		}
		_putchar ('\n');
		con++;
	}
}
