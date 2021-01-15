#include "lists.h"

/**
* pop_listint - function that deletes the head node of
* a listint_t linked list, and returns the head node’s data (n).
* @head: - double pointer that receiver the addres of yhe head
* Return: - the data of the node free
*/

int pop_listint(listint_t **head)
{
	listint_t *head_aux;
	int data = 0;

	if (*head == NULL)
		return (0);

	head_aux = *head;
	*head = head_aux->next;
	data = head_aux->n;
	free(head_aux);
	return (data);
}
