#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its namemain - prints its name
 *
 * @argc: - number of the arguments
 *
 * @argv: - pointer of the arrays
 *
 * Return: number of arguments
 */

int main(int argc, char *argv[])
{
	int count, i;

	count = *argv[0];

	for (i = 1; i < argc; i++)
		count--;

	printf("%d\n", argc - 1);
	return (0);
}
