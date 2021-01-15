#include "variadic_functions.h"

/**
* pprint_cha - Prints char
* @all: -  arg
* Return: Nothing
*/
void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}

/**
* print_integer - Prints integer
* @all: -  arg
* Return: Nothing
*/
void print_integer(va_list all)
{
	printf("%d", va_arg(all, int));
}

/**
* print_float - Prints float
* @all: -  arg
* Return: Nothing
*/
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}

/**
* print_string - Prints string
* @all: -  arg
* Return: Nothing
*/
void print_string(va_list all)
{
	printf("%s", va_arg(all, char *));
}

/**
* print_all - Prints anything
* @format: -  types of arguments passed
* Return: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0, j = 0;

	/*ptr = format;*/

	op_t ops[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(all, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *ops[j].op)
			{
				ops[j].f(all);

				if (format[i + 1] != '\0')
				{
					printf(", ");
					break;
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
