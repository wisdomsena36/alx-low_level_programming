#include "main.h"

/**
 * swap_int - It swaps the values of two integers.
 * @a: The first number to swap.
 * @b: The second number to swap.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
