#include "main.h"

/**
 * puts_half - It prints half of a string.
 * @str: The pointer of the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
