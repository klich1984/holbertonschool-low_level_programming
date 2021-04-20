#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array of
 * integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Null if array is NULL or 1
 */

int binary_search(int *array, size_t size, int value)
{

	int L, R, med;
	int i;

	L = 0;
	R = size - 1;

	while (L <= R)
	{
		med = (R + L) / 2;
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[R]);
		printf("\n");

		if (array[med] == value)
			return (med);
		else if (array[med] > value)
		{
			R = med - 1;
		}
		else
		{
			L = med + 1;
		}
	}
	return (-1);
}
