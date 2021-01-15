#include "holberton.h"

/**
 * _strlen - function what returns the length of a string
 *
 *@s: - definition variable type pointers
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
