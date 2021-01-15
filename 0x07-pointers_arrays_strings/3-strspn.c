#define NULL 0L
#include "holberton.h"


/**
 * _strspn  - gets the length of a prefix substring
 *
 * @s: - Variable pointer a *s
 *
 * @accept: - Variable pointer a *f
 *
 * Return: variable  number of bytes in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int num_byt;

	num_byt = 0;

	{
		for (i = 0; s[i] != ' ' && s[i] != '0'; i++)
		{
			if (s[1] == '\0')
				return (num_byt);

			for (j = 0; accept[j] != '\0'; j++)
			{
				if (*(s + i) == *(accept + j))
					num_byt++;
			}
		}
		return (num_byt);
	}
}
