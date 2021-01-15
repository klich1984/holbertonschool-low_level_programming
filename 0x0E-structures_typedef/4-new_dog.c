#include "dog.h"

/**
* new_dog - create new dog
* @name: - variable that stores the name of the dog
* @age: - variable that stores the age of the dog
* @owner: - variable that stores the owner of the dog
* Return: New-dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new = NULL;

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);

	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;
	return (dog_new);

}
