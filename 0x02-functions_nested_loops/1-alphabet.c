#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
