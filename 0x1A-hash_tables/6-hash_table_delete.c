#include "hash_tables.h"

/**
 * 
 * 
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	int count = 0, j = 0, k = 0;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			free(current->key);
			free(current->value);
			current = current->next;
			count++;
		}

		for (j = 0; j < count; --count)
		{
			current = ht->array[i];

			for (k = 0; k < count - 1; k++)
				current = current->next;

			free(current);
		}
		count = 0;
	}
	free(ht);
}
