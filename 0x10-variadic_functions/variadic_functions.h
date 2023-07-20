#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_t - It Typedef for the struct format_t.
 * @format: The format character.
 * @ptr: The function pointer to the printing function.
 */
typedef struct format_t
{
	char format;
	void (*ptr)(va_list args);
} format_t;

void print_char(va_list c_args);
void print_integer(va_list i_args);
void print_float(va_list f_args);
void print_string(va_list s_args);

#endif /* VARIADIC_FUNCTIONS_H */
