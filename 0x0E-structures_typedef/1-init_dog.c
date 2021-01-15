#include "dog.h"

/**
* init_dog - Inicialization of the struct dog
* @d: - stores direction of the structure my_dog
* @name: - variable that stores the name of the dog
* @age: - variable that stores the age of the dog
* @owner: - variable that stores the owner of the dog
* Return:
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
