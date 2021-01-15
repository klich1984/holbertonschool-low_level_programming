#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 *
 * @s: - definition variable type pointers
 *
 *
 * Return: variable s
 */

char *leet(char *s)
{
	char letter[] = "aAeEoOtTlL";
	char change[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = change[j];
				break;
			}
		}
	}
	return (s);
}
