#ifndef __VARIADIC_FUNCTIONS__H
#define __VARIADIC_FUNCTIONS__H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct op - Struct op
* @op: The operator
* @f: The function associated
*/

typedef struct op
{
	char *op;
	void (*f)(va_list all);
} op_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int _strlen(const char *s);

int _putchar(char);
void print_char(va_list all);
void print_integer(va_list all);
void print_float(va_list all);
void print_string(va_list all);

#endif
