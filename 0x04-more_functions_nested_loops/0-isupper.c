#include "holberton.h"

/**
 * _isupper - checks for uppercase caracter.
 *
 *@c: int is - the variable that will be searched if it is big
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
