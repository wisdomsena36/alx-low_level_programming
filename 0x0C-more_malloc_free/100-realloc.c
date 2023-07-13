#include "main.h"
#include <stdlib.h>

/**
 * _realloc - It reallocates a memory block.
 * @ptr: A pointer to the old allocated memory block.
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The new size of the memory block.
 *
 * Return: A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = realloc(ptr, new_size);
	if (!new_ptr)
		return (NULL);

	return (new_ptr);
}
