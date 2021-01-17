#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table.
* @ht: is the hash table
* Return: Nnthing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (flag != 0 && current != NULL)
			printf(", ");

		current = ht->array[i];
		/*flag = 0;*/
		while (current)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
