#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is
 * a prime number.
 * @n: The number to check.
 * @d: The divisor.
 *
 * Return: 1 if the number is prime number, otherwise 0.
 */
int is_prime_helper(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d == 0)
		return (0);
	else
		return (is_prime_helper(n, d + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_helper(n, 2));
}
