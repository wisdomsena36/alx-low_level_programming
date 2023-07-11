#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - It copies a string up to a specified length.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: NULL if str is NULL, or if str is empty,
 * or memory allocation fails. Otherwise a pointer
 * to an array of words
 */
char **strtow(char *str)
{
	char **words;
	int i;
	int j;
	int k;
	int count;
	int len;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	len = 0;
	k = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;
			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				while (k >= 0)
					free(words[k--]);
				free(words);
				return (NULL);
			}
			_strncpy(words[k], &str[i], len);
			words[k][len] = '\0';
			k++;
			len = 0;
		}
	}
	words[count] = NULL;
	return (words);
}
