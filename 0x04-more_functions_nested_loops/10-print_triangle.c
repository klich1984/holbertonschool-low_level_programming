#include "holberton.h"

/**
 * print_triangle -  prints a triangle.
 *
 *@size: int is - he size of the triangle
 *
 * Return: No return
 */

void print_triangle(int size)
{

	int f, c1, c2;

	if (size > 0)
	{
		for (f = 0; f < size; f++)
		{
			for (c1 = size - 1; f < c1; c1--)
			{
				_putchar(' ');
			}
			for (c2 = 0; c2 <= f; c2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
