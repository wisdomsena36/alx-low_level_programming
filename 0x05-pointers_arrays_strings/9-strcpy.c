#include "main.h"

/**
 * _strcpy - It copies a string.
 * @dest: A pointer to the destination string
 * where the copied string will be stored.
 * @src: A pointer to the source string that will be copied.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
