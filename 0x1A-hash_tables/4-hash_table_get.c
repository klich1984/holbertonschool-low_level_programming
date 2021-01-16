#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a values of the key
* @ht: is the hash table you want to look into
* @key:  is the key you are looking for
* Return: the value associated with the element,
* or NULL if key couldn’t be found
*/


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	hash_node_t *current = NULL;
	unsigned long int idx = 0;

	idx = hash_djb2((unsigned char *)key);  /*(unsigned char *) cast*/
	idx = key_index((unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current != NULL)
	{
		/*si son iguales*/
		if (strcmp(current->key, key) == 0)
		{
			value = current->value;
			return (value);
		}
		current = current->next;
	}
	return (NULL);
}
