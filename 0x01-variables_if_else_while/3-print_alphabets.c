#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_letter;
	char uppercase_letter;

	for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
		putchar(lowercase_letter);
	for (uppercase_letter = 'A'; uppercase_letter <= 'Z'; uppercase_letter++)
		putchar(uppercase_letter);
	putchar('\n');
	return (0);
}
