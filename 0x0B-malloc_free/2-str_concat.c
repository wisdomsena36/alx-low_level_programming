#include "main.h"
#include <stdlib.h>

/**
 * _strnlen - It find the length of a string.
 * @s: The input string.
 *
 * Return: The length of a string.
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
 * str_concat - It concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: The concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *str;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strnlen(s1);
	len2 = _strnlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i++] = s2[j];
	str[i] = '\0';

	return (str);
}
