#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: Variable Pointer
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
