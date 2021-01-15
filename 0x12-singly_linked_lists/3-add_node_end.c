#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: - Pointer to pointer that receives addres head
* @str: - pointer that receives string
* Return: - the addres of yhe new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *new_head;
	list_t *aux2;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	new_head = *head;

	while (new_head != NULL)
	{
		aux2 = new_head;
		new_head = new_head->next;
	}
	if (*head == new_head)
	{
		*head = new_node;
	}
	else
	{
		aux2->next = new_node;
	}

	new_node->next = new_head;
	return (*head);
}

/**
 * _strlen - function what returns the length of a string
 *
 *@s: - definition variable type pointers
 *
 *Return: Value of the i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
