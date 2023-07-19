#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - It frees memory allocated for a struct dog.
 * @d: The struct dog variable to free.
 *
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
