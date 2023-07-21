#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num;
	long int div;

	num = 612852475143;
	div = 2;
	while (num > div)
	{
		if (num % div == 0)
		{
			num /= div;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", num);

	return (0);
}
