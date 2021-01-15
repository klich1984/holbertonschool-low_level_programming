#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: - Variable pointer a buffer
 *
 * @b: - variable save value for fills memory
 *
 * @n: - variable indicates the number the spaces to fill
 *
 * Return: -posicion pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
