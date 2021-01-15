#include "holberton.h"
#define NULL 0L

/**
 * *_strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: - Variable pointer a *s
 *
 * @accept: - Variable pointer a *f
 *
 * Return: a pointer to the byte in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *new1, *new2;

	new1 = s;
	new2 = accept;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return (new1);
			}
			new2++;
		}
		new1++;
		new2 = accept;
	}
	return (NULL);
}
