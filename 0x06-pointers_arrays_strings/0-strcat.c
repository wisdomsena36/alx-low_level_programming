#include "main.h"

/**
 * _strcat - It concatenates two strings.
 * @dest: The destination string.
 * @src: the source string.
 *
 * Return: The pointer of the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (*dest)
	{
		len++;
		dest++;
	}
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
