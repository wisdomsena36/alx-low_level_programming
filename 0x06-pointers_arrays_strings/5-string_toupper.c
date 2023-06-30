#include "main.h"

/**
 * string_toupper - It change all lowercase letter to
 * uppercase letter.
 * @str: The string to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}

	return (str);
}
