#include "main.h"

/**
 * _islower - Checks for lowercase character
 *@letter: The character to be check
 * Return: 1 if character is lowercase or 0 for anything
 */
int _islower(int letter)
{
	if (letter >= 97 && letter <= 122)
		return (1);
	else
		return (0);
}
