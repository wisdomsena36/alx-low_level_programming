#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - It adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Addition of two numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - It subtracts two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Subtruction of two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - It multiplys two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Multiplication of two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - It divides two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Division of two numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - It finds modulo of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Modulo of two numbers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
