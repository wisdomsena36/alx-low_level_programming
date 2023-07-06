#include "main.h"

/**
 * _sqrt_helper - Helper function for finding the square root.
 * @n: The number to find the square root.
 * @i: The number the iterates from 1 to the number.
 *
 * Return: Square root of the number if it exists, otherwise -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - It returns the natural square root of a number.
 * @n: The number to find it square root.
 *
 * Return: Square root of a number. return -1 if the number does
 * not have a square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
