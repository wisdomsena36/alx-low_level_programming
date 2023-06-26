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

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;
	while (i >= 0)
	{
		_putchar(i);
		i--;
	}
	_putchar('\n');
}
