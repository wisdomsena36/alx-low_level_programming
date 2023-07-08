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
	char *err_message;

	err_message = "Error";
	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *current_arg;

			current_arg = argv[i];
			while (*current_arg != '\0')
			{
				if (*current_arg < '0' || *current_arg > '9')
				{
					printf("%s\n", err_message);
					return (1);
				}
				current_arg++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
