#include "holberton.h"

/**
 * *_strcpy - copy a string whit pointers
 *
 * @dest: - definition variable type pointers
 *
 * @src: - definition variable type pointers
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *new = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (new);
}
