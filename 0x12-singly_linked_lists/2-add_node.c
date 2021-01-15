#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list
* @head: - Pointer to pointer that receives addres head
* @str: - pointer that receives string
* Return: - the addres of yhe new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *new_head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	new_head = *head;
	*head = new_node;
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
