#include "variadic_functions.h"

/**
* print_strings - prints strings whit variadic
* @separator: - is the string to be printed between numbers
* @n: - # arguments total
* Return: Noting
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list _print;
	unsigned int i = 0;
	char *ps;

	va_start(_print, n);

	for (i = 0; i < n; i++)
	{
		ps = va_arg(_print, char *);

		if (ps == NULL)
			printf("(nil)");

		else
			printf("%s", ps);

		if (!(i == n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(_print);
}
