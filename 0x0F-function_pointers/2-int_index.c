#include "function_pointers.h"

/**
* int_index - search for an integer
* @array: - Pointer to the array passed
* @size: - is the size of the array
* @cmp: - is a pointer to the function you need to use
* Return: the index of the first elemt for which the cmp != 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);

			if (result != 0)
				return (i);
		}
	}

	return (-1);
}
