#include "lists.h"

/**
* free_list - hat frees a list_t list
* @head: Pointer of add a free
* Return: - Noting
*/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		list_t *aux_borrar;
		int count = 0, i, j;

		aux_borrar = head;

		while (aux_borrar != NULL)
		{
			free(aux_borrar->str);
			aux_borrar = aux_borrar->next;
			count++;
		}

		for (i = 0; i < count; --count)
		{
			free(aux_borrar);
			aux_borrar = head;

			for (j = 0; j < count - 1; j++)
			{
				aux_borrar = aux_borrar->next;
			}
		}
		free(head);
	}
}
