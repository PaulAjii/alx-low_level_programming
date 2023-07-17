#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct defining a dog's info
 * @name:- a member of the struct
 * @age:- a member of the struct
 * @owner:- a member of the struct
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
