#include "holberton.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: - integre
 *
 * @max: - integre
 *
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int *pmatrix;
	int i, j;

	i = j = 0;
	if (min > max)
		return (NULL);

	pmatrix = malloc(sizeof(int) * (max - min + 1));

	if (pmatrix == NULL)
	{
		free(pmatrix);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		pmatrix[j] = i;
		j++;
	}

	return (pmatrix);
}
