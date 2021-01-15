#include "holberton.h"

/**
 * *_strncpy - copy a string whit pointers
 *
 * @dest: - definition variable type pointers
 *
 * @src: - definition variable type pointers
 *
 * @n : # of the caracters a copy
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *new = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (new);
}
