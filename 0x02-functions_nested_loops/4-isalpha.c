#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @letter: The character to be check
 *
 * Return: 1 if letter is an alphabetic character, 0 otherwise
 */
int _isalpha(int letter)
{
	if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
		return (1);
	else
		return (0);
}
