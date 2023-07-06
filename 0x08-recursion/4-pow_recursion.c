#include "main.h"

/**
 * _pow_recursion - It print the value of a number raised to
 * the power of another number.
 * @x: The base number.
 * @y: The exponent number.
 *
 * Return: The value of a number raised to another number.
 * If exponent number is less than 0 return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
