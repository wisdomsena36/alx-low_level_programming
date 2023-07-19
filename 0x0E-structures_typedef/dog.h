#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - It is a struct for a dog.
 * @name: The first element.
 * @age: The second element.
 * @owner: The third element.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
