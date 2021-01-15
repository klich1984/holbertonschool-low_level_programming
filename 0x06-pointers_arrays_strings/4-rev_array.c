#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: - name the pointers
 *
 * @n : # of the caracters the arrat
 *
 * Return: poiter a
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	i = 0;

	while (n > 0 && i < n)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n - 1] = aux;
		i++;
		n--;
	}

}
