#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 *
 * @argc: - number of the arguments
 *
 * @argv: - pointer of the arrays
 *
 * Return: - 1 if is a one argument or value of the multiplication isn´t
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", result);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
