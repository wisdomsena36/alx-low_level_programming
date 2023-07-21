#include <stdio.h>
#include "main.h"

/**
 * _isupper - It checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
