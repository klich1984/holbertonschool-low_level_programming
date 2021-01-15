#include "holberton.h"

/**
 * main = print_alphabet - print alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar (abc);
	}

	_putchar ('\n');
}
