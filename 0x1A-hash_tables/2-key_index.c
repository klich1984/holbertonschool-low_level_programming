#include "hash_tables.h"

/**
* key_index - Function that gives you the index of a key
* @key: is the key
* @size: Is yhe size of the array of the hash table
* Return: the index found
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	printf("el index = %ld\n", index);
	return (index % size);
}