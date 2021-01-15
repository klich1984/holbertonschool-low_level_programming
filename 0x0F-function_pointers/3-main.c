#include "3-calc.h"

/**
* main - program that performs simple operations
* @argc: # of the arguments
* @argv: value of argument
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int calc = 0, num1 = 0, num2 = 0;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (argv[2][1] != '\0' || operator == NULL)
	{
		printf("Error\n");
		return (99);
	}

	calc = operator(num1, num2);
	if (calc == 100 && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	else
		printf("%d\n", calc);
	return (0);
}
