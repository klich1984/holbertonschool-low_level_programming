#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 *
 * @width: - size of width
 *
 * @height: - size of height
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arrBi;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrBi = malloc(height * sizeof(int *));

	if (arrBi == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrBi[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arrBi[i][j] = 0;
		}
	}
	return (arrBi);
}
