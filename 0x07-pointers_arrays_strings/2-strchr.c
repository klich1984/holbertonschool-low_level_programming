#define NULL 0L
#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: - variable Pointers of the array s
 *
 * @c: - Variable the caracter a locates
 *
 * Return: s if locate of the caracter o NULL if no
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != c; i++)
	{
		if (*s == '\0')
			return (NULL);

		s++;
	}

	if (*s == '\0')
	{
		return (s);
	}

	return (s);
}
