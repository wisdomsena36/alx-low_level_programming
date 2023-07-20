#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - It executes a function on each
 * element of an array.
 * @array: The array of integers element.
 * @size: The size of the array element.
 * @action: The pointer to the function to execute
 * on each element.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
