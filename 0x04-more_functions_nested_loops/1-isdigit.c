#include <stdio.h>
#include "main.h"

/**
 * _isdigit - It checks for a digit between 0 and 9.
 * @c: The input number.
 *
 * Return: 1 if character is a number. Otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
