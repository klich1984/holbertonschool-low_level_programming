#include "holberton.h"

/**
 * *string_toupper - reverses a sring
 *
 * @s: - definition variable type pointers
 *
 *
 * Return: variable *s
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}

		else
			i++;

	}
	return (s);
}
