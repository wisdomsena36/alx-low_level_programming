#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - It allocates memory using malloc.
 * @b: The number of byte to allocates.
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, the function should
 * cause normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);

	return (alloc);
}
