#include "main.h"
#include <stdlib.h>

/**
 * create_array - It creates an array of chars, and initializes
 * it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array.
 *
 * Return: NULL if size is 0 or if memmory allocation fails otherwise
 * a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
