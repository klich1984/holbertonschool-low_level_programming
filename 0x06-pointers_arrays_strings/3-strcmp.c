#include "holberton.h"

/**
 * *_strcmp - compares two strings
 *
 * @s1: - definition variable type pointers
 *
 * @s2: - definition variable type pointers
 *
 * Return: integre value
 */

int _strcmp(char *s1, char *s2)
{
	int result, i;

	result = 0;

	while (1)
	{
		for (i = 0; *s1 == *s2 && *s1 != '\0'; i++)
		{
			s1++;
			s2++;
		}

		if (*s1 != *s2)
			result = *s1 - *s2;

		return (result);
	}
}
