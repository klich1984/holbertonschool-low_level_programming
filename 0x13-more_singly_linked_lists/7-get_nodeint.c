#include "lists.h"

/**
* get_nodeint_at_index - function that returns the
* nth node of a listint_t linked list.
* @head: pointer that save the addres from the list.
* @index:  is the index of the node, starting at 0
* Return: - returns the nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *head_aux = NULL;

	head_aux = head;

	for (i = 0; head_aux != 0 && i <= index; i++)
	{
		if (i == index)
			return (head_aux);

		head_aux = head_aux->next;
	}
	return (NULL);
}
