#include "main.h"

/**
 * _atoi - It convert a string to an integer.
 * @s: A pointer to the string to be converted to an integer.
 *
 * Return: Converted integer value.
 */
int _atoi(char *s)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		int digit;

		digit = s[i] - '0';
		if (digit >= 0 && digit <= 9)
			res = res * 10 + digit;
		else
			break;
		i++;
	}
	res = res * sign;
	return (res);
}
