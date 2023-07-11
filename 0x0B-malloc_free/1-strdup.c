#include "main.h"
#include <stdlib.h>

/**
 * _strnlen - It finds the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strnlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - It deplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: NULL if str is NULL or if memory allocation fails
 * otherwise a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	len = _strnlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
