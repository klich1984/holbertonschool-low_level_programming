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
	int i, result, j, legal;

	i = result = j = legal = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}


	else
	{
		for (j = 1; j < argc; j++)
		{
			for (i = 0; argv[j][i] != '\0'; i++)
			{
				if (argv[j][i] < '0' || argv[j][i] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			result = result + atoi(*(argv + j));
		}
		printf("%d\n", result);
	}
	return (0);
}
