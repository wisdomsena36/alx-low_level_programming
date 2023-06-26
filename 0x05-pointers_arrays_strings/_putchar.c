#include <unistd.h>

/**
 * _putchar - write the character to std
 * @c: The character to print
 *
 * Return: 1 on Success or -1 on Error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
