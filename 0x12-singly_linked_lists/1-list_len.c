#include "lists.h"

/**
* list_len - counts the length of a list
* @h: - Pointer that receives a list
* Return: - numbers of elements of a list
**/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
