#include "main.h"
#include <stdlib.h>

/**
 * argstostr - It concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string.
 * Otherwise NULL If memory
 * allocation fails or if ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int len;
	int total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++;
	}

	s = malloc(sizeof(char) * (total_len + 1));
	if (s == NULL)
		return (NULL);

	len = 0;
	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			s[len++] = av[i][j];
		s[len++] = '\n';
		i++;
	}
	s[len] = '\0';

	return (s);
}
