#include "main.h"

/**
 * wildcmp - It compares two strings and checks if they can be
 * considered identical.
 * @s1: The first string.
 * @s2: The second string with wildcard character '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
