#include "main.h"

/**
 * _strlen - It returns the length of a string.
 * @s: The pointer to the string for which the length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
