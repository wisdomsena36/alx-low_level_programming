#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Entry point.
 * @argc: It counts the number of array in argv.
 * @argv: It is a vector.
 *
 * Return: Always 0 on Success.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
