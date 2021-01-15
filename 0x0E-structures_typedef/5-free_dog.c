#include "dog.h"

/**
* free_dog - free Heap
* @d: - stores direction of the structure my_dog
* Return: - Noting
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
