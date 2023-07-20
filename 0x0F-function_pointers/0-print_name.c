#include <stdio.h>

/**
 * print_name - It prints a name using a function pointer.
 * @name: The input name.
 * @f: The pointer to the function that prints the name;
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
