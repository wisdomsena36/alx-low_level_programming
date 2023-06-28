#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - It generates randam valid passwords.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int i;
	int total;
	int num;

	i = 0;
	total = 0;
	srand(time(NULL));
	while (i < 100)
	{
		password[i] = rand() % 78;
		total += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			num = 2772 - total - '0';
			total += num;
			putchar(num + '0');
			break;
		}
	}
	return (0);
}
