#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: The vector of argument.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;

	unsigned char *main_address = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", main_address[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
