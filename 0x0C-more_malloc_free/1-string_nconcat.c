#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: - variable type pounter
 *
 * @s2: - variable type pounter
 *
 * @n: # of the two string a print
 *
 * Return: Pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size, l1, l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2) + 1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = l1 + l2;

	if (n >= l2)
	{
		ptr = malloc(sizeof(char) * size + 1);
		n = l2;
	}
	else
		ptr = malloc(sizeof(char) * l1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];

	j = 0;
	for (; i < n + l1; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);

}


/**
 * _strlen - function what returns the length of a string
 *
 * @s: - definition variable type pointers
 *
 * Return: Value of the i
 */

int _strlen(char *s)
{

	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
