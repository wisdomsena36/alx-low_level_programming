#include "main.h"

/**
 * This function prints the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char character;

	for(character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
