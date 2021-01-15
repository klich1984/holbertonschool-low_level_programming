#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters
*
* @n: # arguments total
*
* Return: sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int result = 0;
	unsigned int i;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum, const unsigned int);
	}

	va_end(sum);
	return (result);
}
