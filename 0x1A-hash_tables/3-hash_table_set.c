#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @key: pointer a string what containe the key
* @value: pointer a string what containe the value
* @ht: hash table
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	int result = 0;

	if (key == NULL || value == NULL || strcmp(key, "") == 0 ||
		strcmp(value, "") == 0 || ht == NULL || ht->array == NULL
		|| ht->size == 0)
	{
		/*free mallocs*/
		return (0);
	}

	idx = key_index((unsigned char *)key, ht->size);
	result = add_elemnt_hash_table(ht, idx, key, value);
	return (result);
}

/**
* add_elemnt_hash_table - function add node that array in el index
* @ht: hash table
* @idx: index of the position of the array
* @key: key of the node
* @value: value of value
* Return: 1 if it succeeded, 0 otherwise
*/

int add_elemnt_hash_table(hash_table_t *ht, unsigned long int idx,
			const char *key, const char *value)
{
	hash_node_t *current = NULL;
	hash_node_t *new_node = NULL;
	char *new_value = NULL;

	current = ht->array[idx];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			/*liberar espacio de strdup*/
			return (1);
		}
		else
			current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/**
	 * creo los espacios en memoria para Lleno los datos
	*new_node->key = malloc(sizeof(strlen(key)));
	*/
	new_node->key = malloc(strlen(key) + 1 * sizeof(char));
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	/**
	 * Guardian de malloc
	*new_node->value = malloc(sizeof(strlen(value)));
	*/
	new_node->value = malloc(strlen(key) + 1 * sizeof(char));
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/*rellenar espacios*/
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	ht->array[idx] = new_node;
	ht->array[idx]->next = current;
	return (1);
}
