#include "main.h"

/**
 * clear_bit - It clears the value of a bit at a given index to 0.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
