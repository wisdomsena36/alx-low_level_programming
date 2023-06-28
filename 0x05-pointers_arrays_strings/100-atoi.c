#include "main.h"

/**
 * _atoi - It convert a string to an integer.
 * @s: A pointer to the string to be converted to an integer.
 *
 * Return: Converted integer value.
 */
int _atoi(char *s)
{
	int i;
	int len;
	int digit;
	int num;
	int dec;
	int fs;

	i = 0;
	len = 0;
	digit = 0;
	num = 0;
	dec = 0;
	fs = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && fs == 0)
	{
		if (s[i] == '-')
			++dec;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (dec % 2)
				digit = -digit;
			num = num * 10 + digit;
			fs = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			fs = 0;
		}
		i++;
	}
	if (fs == 0)
		return (0);
	return (num);
}
