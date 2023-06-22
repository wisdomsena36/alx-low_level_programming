#include "main.h"

/**
 * print_last_digit - It prints the last digit of a number.
 * @n: The number to extract the last digit.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		return (last_digit);
	}
	return (last_digit);
}
