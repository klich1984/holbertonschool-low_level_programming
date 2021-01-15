 #include "holberton.h"
/**
 * swap_int - function what swaps two integers
 *
 * @a: - definition variables pointers
 * @b: - definition variables pointers
 *
 * Return: Noting
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
