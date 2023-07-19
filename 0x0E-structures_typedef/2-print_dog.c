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

		if (d->age != NULL)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
