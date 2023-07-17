#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a struct
 * @d:- pointer to the struct to be initialized
 * @name:- a member of the struct
 * @age:- a member of the struct
 * @owner:- a member of the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
