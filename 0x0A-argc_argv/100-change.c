#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints its name
 *
 * @argc: - number of the arguments
 *
 * @argv: - pointer of the arrays
 *
 * Return: - 1 if is a one argument or value of the multiplication isn´t
 */

int main(int argc, char **argv)
{
	int i, result, coin;

	int value[5] = {25, 10, 5, 2, 1};

	i = result = coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("%d\n", 0);
		return (0);
	}

	result = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (result >= value[i])
		{
			result = result - value[i];
			coin++;
		}

		if (result == 0)
		{
			printf("%d\n", coin);
			return (0);
		}
	}

	printf("%d\n", coin);
	return (0);
}
