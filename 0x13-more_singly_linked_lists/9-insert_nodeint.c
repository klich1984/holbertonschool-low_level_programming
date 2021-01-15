#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts
* a new node at a given position.
* @head: - double pointer of the addres of the last node in the list
* @idx:  index of the list where the new node should be added.
* Index starts at 0
* @n: - number to be inserted in the new node
* Return: -  the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head_aux = NULL;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	head_aux = *head;
	new_node->n = n;

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = head_aux;
		return (new_node);
	}

	for (i = 1; (i < idx) && (head_aux->next != NULL); i++)
	{
		head_aux = head_aux->next;
	}

	if (i == idx)
	{
		new_node->next = head_aux->next;
		head_aux->next = new_node;
	}
	else
		return (NULL);

	return (new_node);
}


