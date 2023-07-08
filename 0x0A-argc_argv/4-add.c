#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Entry point.
 * @argc: It counts the number of array in argv.
 * @argv: THe vectors.
 *
 * Return: Always 0 on Success.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int number;

			number = atoi(argv[i]);
			if (number == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += number;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
