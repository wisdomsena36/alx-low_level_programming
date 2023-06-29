#include "main.h"

/**
 * _strncat - It concatenates two strings, up to a
 * number of bytes from source
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of byte to be copied.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;
	char *str_len;

	len = 0;
	str_len = dest;
	while (*str_len)
	{
		len++;
		str_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
