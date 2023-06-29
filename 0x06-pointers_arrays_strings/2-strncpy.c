#include "main.h"

/**
 * _strncpy - It copies a string, up to a number of bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximun number of bytes to be copied.
 *
 * Return: A pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
