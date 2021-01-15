#include "function_pointers.h"

/**
* print_name - Print name whit Function Pointer
* @name: - variable pointer that stores name
* @f: - Function Pointer pointing too or function
* Return: Noting
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
	f(name);
	}
}
