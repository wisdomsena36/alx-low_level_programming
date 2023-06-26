#include "main.h"

/**
 * put2 - It prints every other character of a string.
 * @str: The pointer to the string from which every other character will be printed.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
