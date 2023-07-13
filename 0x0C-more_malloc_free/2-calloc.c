#include "main.h"
#include <stdlib.h>

/**
 * _calloc - It allocates memory for an array, using malloc.
 * @nmemb: The number of element.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory. NULL if nmemb
 * or size is 0 or calloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = calloc(nmemb, size);
	if (alloc == NULL)
		return (NULL);

	return (alloc);
}
