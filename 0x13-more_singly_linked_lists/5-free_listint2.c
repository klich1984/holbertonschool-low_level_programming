#include "lists.h"

/**
* free_listint2 - Function that frees a listint_t list.
* @head: - double pointer of the addres of the last node in the list
* Return: Noting
*/

void free_listint2(listint_t **head)
{
	listint_t *head_aux = *head;
	int i = 0, j = 0, counter = 0;


	while (head_aux != NULL)
	{
		head_aux = head_aux->next;
		counter++;
	}

	head_aux = *head;

	for (i = 0; i <= counter; counter--)
	{
		for (j = 0; j < counter; j++)
			head_aux = head_aux->next;
		free(head_aux);
		head_aux = *head;
	}
	*head = NULL;
	free(*head);
}
