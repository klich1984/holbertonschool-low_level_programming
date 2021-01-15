#include "lists.h"

/**
* print_list - print all the elements of a list
* @h: Pointer that receives a list
* Return: - Numbers of elements of a list
**/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		counter++;
	}
	return (counter);
}
