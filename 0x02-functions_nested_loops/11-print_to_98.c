#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Print all natural numbers from a number to 98.
* @n: The number to start counting from
*
* Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
