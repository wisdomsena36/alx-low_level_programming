#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - It returns the sum of all its parameters.
 * @n: The number of integers.
 *
 * Return: Sum of the integer numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	int sum;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}
	va_end(numbers);

	return (sum);
}
