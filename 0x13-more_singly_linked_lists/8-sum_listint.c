#include "lists.h"

/**
* sum_listint - function that returns the sum of all the
* data (n) of a listint_t linked list.
* @head: pointer receive the addres from list.
* Return: - sum from all datas
*/

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *head_aux = NULL;

	head_aux = head;

	if (head == NULL)
		return (0);

	while (head_aux != NULL)
	{
		result = result + head_aux->n;
		head_aux = head_aux->next;
	}
	return (result);
}
