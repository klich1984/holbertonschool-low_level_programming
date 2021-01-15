#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - que concatene dos cadenas whit malloc
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: NULL on failure or pointer new array
 */
char *str_concat(char *s1, char *s2)
{
	char *arrayConca = NULL;
	int i, j, l1, l2, sizet;

	if (s1 == NULL || s2 == NULL)
	{
		arrayConca = malloc(sizeof(char));
		return (arrayConca);
	}

	i = j = l1 = l2 = sizet = 0;

	l1 = _strlen(s1);
	l2 = _strlen(s2) + 1;

	sizet = l1 + l2;

	arrayConca = malloc(sizet * sizeof(char));

	for (i = 0; i < l1; i++)
	{
		arrayConca[i] = s1[i];
	}

	for (; i < sizet; i++)
	{
		arrayConca[i] = s2[j];
		j++;
	}

	return (arrayConca);
}


/**
 * _strlen - function what returns the length of a string
 *
 * @s: - definition variable type pointers
 *
 * Return: Value of the i
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
