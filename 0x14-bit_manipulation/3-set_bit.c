#include "main.h"

/**
 * set_bit - It sets the value of a bit at a given index to 1.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
