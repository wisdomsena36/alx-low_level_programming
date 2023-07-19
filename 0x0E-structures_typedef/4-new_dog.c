#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - It creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog struct.
 * NULL if allocation fails or name or owner is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->name, name, name_len);
	new_dog->name[name_len] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->owner, owner, owner_len);
	new_dog->owner[owner_len] = '\0';

	return (new_dog);
}
