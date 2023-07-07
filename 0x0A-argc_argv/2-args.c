#include <stdio.h>

/**
 * main - The Entry point.
 * @argc: It count the number of array in argv.
 * @argv: It is the vector.
 *
 * Return: Always 0 on Success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
