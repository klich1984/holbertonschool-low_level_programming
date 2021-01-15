#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: Integer of the size memory I will use
 *
 * @c: character for the array
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = NULL;

	arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
