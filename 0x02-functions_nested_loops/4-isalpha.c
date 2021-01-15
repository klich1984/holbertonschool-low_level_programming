#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 *@c: int is - the value del condition if
 *
 * Return: 1 if c is return 1 if it is leeter alphabetic
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}

	else if ((c >= 97) && (c <= 122))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
