#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - It searches for an integer in array.
 * @array: The array of integers to search.
 * @size: The size of the array elements.
 * @cmp: The pointer to the function to compare integers.
 *
 * Return: Index of the first element.
 * -1 if no element matches or size is 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
