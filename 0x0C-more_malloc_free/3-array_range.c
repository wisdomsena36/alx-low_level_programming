#include "main.h"
#include <stdlib.h>

/**
 * array_range - It creates an array of integers.
 * @min: The minimum number.
 * @max: The maximum number.
 *
 * Return: The pointer to the newly created array.
 * NULL if min is greater than max or malloc fails.
 */
int *array_range(int min, int max)
{
	int i;
	int len;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}
