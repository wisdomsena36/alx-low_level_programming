#include "main.h"

/**
 * get_endianness - It checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num;
	char *endian = (char *)&num;

	num = 1;
	if (*endian == 1)
		return (1);
	else
		return (0);
}
