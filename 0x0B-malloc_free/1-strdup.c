#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars
 *
 * @str: Pointer recive array
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */


char *_strdup(char *str)
{
	char *copyArr = NULL;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		size = _strlen(str);
		copyArr = malloc(size * sizeof(char));

		if (copyArr == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			copyArr[i] = str[i];
		}
		return (copyArr);
	}
}

/**
 * _strlen - function what returns the length of a string
 *
 * @s: - definition variable type pointers
 *
 *Return: Value of the i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
