#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: - Pointer that receives a list
* Return: - Numbers of elements of a list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
