#include <unistd.h>

/**
 * _putchar - write the character to std
 * @character: The character to print
 * 
 * Return: 1 on Success or -1 on error
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
