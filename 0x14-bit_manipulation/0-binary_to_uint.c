#include "holberton.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: is pointing to a string of 0 and 1 chars
* Return:  the converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, n = 0, aux = 0;

	if (b == NULL)
		return (0);

	n = _strlen(b);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			result = result + 0;
			n--;
		}

		else if (*b == '1')
		{
			aux = *b - 48;
			aux = aux << (n - 1);
			result = result + aux;
			n--;
		}
		else
			return (0);
		b++;
	}
	return (result);
}

/**
 * _strlen - function what returns the length of a string
 *
 *@s: - definition variable type pointers
 *
 *Return: Value of the i
 */

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
