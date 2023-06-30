#include "main.h"

/**
 * reverse_array - It reverse the content of an array of integers.
 * @a: The array element to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}
