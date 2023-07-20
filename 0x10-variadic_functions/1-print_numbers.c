#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - It prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	printf("\n");

	va_end(args);
}
