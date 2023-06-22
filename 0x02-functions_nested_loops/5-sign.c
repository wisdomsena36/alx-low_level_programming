#include "main.h"

/**
* print_sign - It prints the sign of a number.
* @n: The number to be check.
*
* Return: 1 if n is positive, -1 if n is negative, 0 if n is zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
