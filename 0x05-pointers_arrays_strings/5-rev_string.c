#include "main.h"

/**
 * rev_string - It prints string in reverse.
 * @s: The pointer to the string to be reverse.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	char tmp;
	int len2;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;
	for (i = 0; i < len / 2; i++) 
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
	}
}
