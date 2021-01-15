#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: - pointer to pointer that receives a list
* @n: - dato integer
* Return: - address of the new element, or NULL if it failede
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_aux = NULL;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	head_aux = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (head_aux->next != NULL)
		head_aux = head_aux->next;

	head_aux->next = new_node;

	return (new_node);
}
