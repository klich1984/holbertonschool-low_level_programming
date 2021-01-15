#include "holberton.h"

/**
 * *_strncat -  concatenates two strings
 *
 * @dest: definition variable type pointers
 *
 * @src: definition variable type pointers
 *
 * @n: # of the caracteres a copy
 *
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new = dest;
	int i;

	for (i = 0; *dest != '\0'; i++)
		dest++;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (new);
}
