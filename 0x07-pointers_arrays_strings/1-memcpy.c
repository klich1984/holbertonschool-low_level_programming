#include "holberton.h"

/**
 * *_memcpy -  copies memory area.
 *
 * @dest: - pointer from memory area of the destino
 *
 * @src: - pointer from memory area of the source
 *
 * @n: - # de bytes off the copy.
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *newdest;

	i = 0;
	newdest = dest;

	while (n > 0)
	{
		*newdest = src[i];
		i++;
		newdest++;
		n--;
	}
	return (dest);
}
