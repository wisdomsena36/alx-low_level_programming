#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - It prints a struct dog.
 * @d: The struct dog.
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: (nil)");
	}
}
