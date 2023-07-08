#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Entry point.
 * @argc: The number of array in argv.
 * @argv: The vector.
 *
 * Return: Always 0 on Success.
 */
int main(int argc, char *argv[])
{
	int i;
	int dev;
	int coins;
	int denominations[5];
	int num_denominations;

	dev = 0;
	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	dev = atoi(argv[1]);
	denominations[0] = 25;
	denominations[1] = 10;
	denominations[2] = 5;
	denominations[3] = 2;
	denominations[4] = 1;
	num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < num_denominations; i++)
	{
		while (dev >= denominations[i])
		{
			dev -= denominations[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
