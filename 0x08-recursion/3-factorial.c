#include "main.h"

/**
 * factorial - It returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: Factorial of the number.
 * If the number is lower than 0, return -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
