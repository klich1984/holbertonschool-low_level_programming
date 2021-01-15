#include <stdio.h>
#include "holberton.h"

/**
 * main - checks for uppercase caracter.
 * Return: 1
 */

int main(void)
{
	int i, j, k;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		j = i % 3;
		k = i % 5;

		if (j == 0 && k == 0)
		{
			printf(" FizzBuzz");
		}
		else if (j == 0)
			printf(" Fizz");

		else if (k == 0 && i <= 100)
			printf(" Buzz");

		else
			printf(" %d", i);
	}

	printf("\n");
	return (0);
}
