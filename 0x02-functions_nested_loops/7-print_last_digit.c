#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 *@ln: int is - last digit of a number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int ln)
{
	int ld;

	ld = ln % 10;

	if (ld >= 0)
	{
		_putchar(ld + '0');
	}

	else
	{
		ld = ld * -1;
		_putchar(ld + '0');
	}

	return (ld);
}
