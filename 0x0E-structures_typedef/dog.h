#ifndef __DOG__H
#define __DOG__H
#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - info Dog
* @name: - name of the Dog
* @age: - Age of the Dog
* @owner: - Owner of the Dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
