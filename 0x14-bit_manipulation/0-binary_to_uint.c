#include "main.h"

/**
 * binary_to_uint - It converts a binary string to an unsigned integer.
 * @b: The binary string to be converted.
 *
 * Return: The converted unsigned integer, or
 * 0 if input is not a binary string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	if (!b)
		return (0);

	res = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res * 2) + (*b - '0');
		b++;
	}

	return (res);
}
