#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - It prints a character.
 * @c_args: The va_list that contains the character.
 *
 * Return: Void.
 */
void print_char(va_list c_args)
{
	printf("%c", va_arg(c_args, int));
}

/**
 * print_integer - It prints an integer.
 * @i_args: The va_list that contains the integer.
 *
 * Return: Void.
 */
void print_integer(va_list i_args)
{
	printf("%d", va_arg(i_args, int));
}

/**
 * print_float - It prints a float.
 * @f_args: The va_list that contains the float.
 *
 * Return: Void.
 */
void print_float(va_list f_args)
{
	printf("%f", va_arg(f_args, double));
}

/**
 * print_string - It prints a string.
 * @s_args: The va_list that contains the string.
 */
void print_string(va_list s_args)
{
	char *s;

	s = va_arg(s_args, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - It prints anything based on the data type.
 * @format: A pointer to a string containing the format.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;
	char *separator;

	format_t formats[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	i = 0;
	j = 0;
	separator = "";
	while (format && format[i])
	{
		j = 0;
		while (formats[j].format)
		{
			if (formats[j].format == format[i])
			{
				printf("%s", separator);
				formats[j].ptr(args);
				separator = ", ";
			}

			j++;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
