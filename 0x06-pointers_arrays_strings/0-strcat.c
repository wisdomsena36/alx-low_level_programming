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
	int dest_len;
	char *proc_s;

	len = 0;
	proc_s = dest;
	while (*proc_s)
	{
		len++;
		proc_s++;
	}

	dest_len = len;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
