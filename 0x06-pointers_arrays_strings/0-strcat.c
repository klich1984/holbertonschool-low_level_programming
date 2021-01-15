#include "holberton.h"
/**
 * *_strcat -  concatenates two strings
 *
 * @dest: definition variable type pointers
 *
 * @src: definition variable type pointers
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	char *new = dest;

	for (i = 0; *dest != '\0'; i++)
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (new);
}
