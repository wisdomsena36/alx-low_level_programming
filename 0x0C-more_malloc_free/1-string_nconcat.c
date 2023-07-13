#include "main.h"
#include <stdlib.h>

/**
 * _strlen - It find the length of a string.
 * @s: The input characters.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - It concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of character from s2 to concatenates.
 *
 * Return: A pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s1 != NULL)
		len1 = _strlen(s1);

	if (s2 != NULL)
		len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	str = malloc((len1 + n + 1) * sizeof(char));
	if (!str)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}
