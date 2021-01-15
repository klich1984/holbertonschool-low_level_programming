#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @key: pointer a string what containe the key
* @value: pointer a string what containe the value
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int result = 0;
	(void) ht;
	(void) result;

	if (key == NULL || value == NULL)
	{
		printf("Key o value this empty");
		/*free mallocs*/
		return 0;
	}

	index = hash_djb2((unsigned char *)key);  /*(unsigned char *) cast*/
	printf("the index before= %ld\n", index);
	index = key_index((unsigned char *)key, ht->size);
	printf("the index after= %ld\n", index);
	return 1;
}