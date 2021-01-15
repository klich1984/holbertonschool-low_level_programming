#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 *
 * @argc: - number of the arguments
 *
 * @argv: - pointer of the arrays
 *
 * Return: - cero
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
