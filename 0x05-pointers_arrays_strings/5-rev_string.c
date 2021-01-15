#include "holberton.h"

/**
 * rev_string - reverses a sring
 *
 * @s: - definition variable type pointers
 *
 *
 * Return: variable *s
 */

void rev_string(char *s)
{
	int i, j, l;
	char *a, *b, temp;

/**cuento el largo del string*/
	i = 0;

	while (s[i] != 0)
	{
		i++;
	}


	l = i;
	a = s;
	b = s;

	for (j = 0; j < l - 1; j++)
	{
		b++;
	}

	for (j = 0; j < l / 2; j++)
	{
		temp = *b;
		*b = *a;
		*a = temp;

		a++;
		b--;
	}
}
