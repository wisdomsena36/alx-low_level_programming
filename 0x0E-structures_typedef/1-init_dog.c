#include <stdlib.h>
#include <dog.h>

/**
 * init_dog - It intialize a variable of type struct dog.
 * @d: The struct of dog.
 * @name: The first element.
 * @age: The second element.
 * @owner: The third element.
 *
 * Return: Void
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
