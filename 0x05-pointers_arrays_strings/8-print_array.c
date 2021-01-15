#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array de integers
 * @n: is the # of elements of the array to be printed
 *
 * Return: # of what contain the array
 */

void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", a[pos]);

		if (pos < n - 1)
			printf(", ");
	}
	putchar('\n');
}
