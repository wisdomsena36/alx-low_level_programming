#include "main.h"

/**
 * strlen - It returns the length of a string.
 * @s: The string to find it length.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is
 * palindrome.
 * @s: The string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - It check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	if (length <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, length - 1));
}
