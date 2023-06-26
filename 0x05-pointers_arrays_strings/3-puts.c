#include "main.h"

/**
 * _puts - It prints a string
 * @str: The pointer to the string to be printed.
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	putchar('\n');
}
