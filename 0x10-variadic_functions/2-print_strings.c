#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - It prints strings.
 * @separator: The string to be printed between strings.
 * @n: The number of strings.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_args;
	unsigned int i;
	char *s;

	va_start(str_args, n);

	i = 0;
	while (i < n)
	{
		s = va_arg(str_args, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	printf("\n");

	va_end(str_args);
}
