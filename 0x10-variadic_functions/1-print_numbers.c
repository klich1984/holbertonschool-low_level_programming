#include "variadic_functions.h"

/**
* print_numbers - prints numbers whit variadic
* @separator: - is the string to be printed between numbers
* @n: - # arguments total
* Return: Noting
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list _print;
	unsigned int i = 0;

	va_start(_print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(_print, const unsigned int));

		if (!(i == n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(_print);
}
