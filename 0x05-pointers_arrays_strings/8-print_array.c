#include "main.h"
#include <stdio.h>

/**
 * print_array - It prints elements of an array of integers
 * @a: The pointers to the integer array to be printed.
 * @n: The number of elements of the array to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
