#include "main.h"
#include <stdlib.h>

/**
 * initialize_array - It allocates and initializes
 * an array with zeros.
 * @size: Size of the array.
 *
 * Return: A pointer to the initialized
 * array, or NULL on failure.
 */
unsigned int *initialize_array(size_t size)
{
	unsigned int *arr;
	size_t i;

	arr = malloc(sizeof(unsigned int) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return (arr);
}

/**
 * print_error - It prints an error message and exits.
 * @status: Error code to exit with.
 *
 * Return: Void
 */
void print_error(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}

/**
 * multiply_strings - It multiplies two strings representing
 * positive integers
 * @prod: The array to store the digits of the product.
 * @num1: The string containing the digits
 * of the multiplicand.
 * @num2: The string containing the digits
 * of the multiplier.
 * @len1: The length of the multiplicand.
 * @len2: The length of the multiplier.
 *
 * Return: Void.
 */
void multiply_strings(unsigned int *prod,
		char *num1, char *num2, size_t len1, size_t len2)
{
	int i;
	int j;
	int sum;
	unsigned char d1;
	unsigned char d2;

	if (prod == NULL || num1 == NULL || num2 == NULL)
		return;

	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		d1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = num2[j] - '0';

			sum += prod[i + j + 1] + (d1 * d2);

			prod[i + j + 1] = sum % 10;

			sum /= 10;
		}

		if (sum > 0)
			prod[i + j + 1] += sum;
	}
}

/**
 * is_positive_number - It validates if a string
 * represents a positive integer.
 * @str: The input strings.
 *
 * Return: 1 if true, 0 if false.
 */
int is_positive_number(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - Entry point.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	size_t i, len1, len2, prod_len;
	unsigned int *prod;

	if (argc != 3 || !is_positive_number(argv[1])
			|| !is_positive_number(argv[2]))
		print_error(98);

	for (i = 0, len1 = 0; argv[1][i]; i++)
		len1++;
	for (i = 0, len2 = 0; argv[2][i]; i++)
		len2++;

	prod_len = len1 + len2;
	prod = initialize_array(prod_len);
	if (!prod)
		print_error(98);

	multiply_strings(prod, argv[1], argv[2], len1, len2);
	for (i = 0; !prod[i] && i < prod_len; i++)
	{
	}

	if (i == prod_len)
		_putchar('0');
	for (; i < prod_len; i++)
		_putchar(prod[i] + '0');
	_putchar('\n');
	free(prod);

	return (0);
}
