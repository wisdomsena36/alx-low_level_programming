#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - Copies a string up to a specified length.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * allocate_words - Allocates memory for the words array.
 * @count: The number of words.
 *
 * Return: A pointer to the allocated words array.
 */
char **allocate_words(int count)
{
	char **words;

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * copy_word - Copies a word from the source string to a new memory location.
 * @word: The word to copy.
 * @src: The source string.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 *
 * Return: A pointer to the new memory location containing the copied word.
 */
char *copy_word(char *word, char *src, int start, int end)
{
	int len = end - start;

	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);

	_strncpy(word, &src[start], len);
	word[len] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: NULL if str is NULL, if str is empty,
 *         or if memory allocation fails. Otherwise, a pointer
 *         to an array of words.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count, len;
	int start, end;
	char *word;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words = allocate_words(count);
	if (words == NULL)
		return (NULL);
	k = 0;
	start = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			start = i;
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;
			end = j;
			word = copy_word(words[k], str, start, end);
			if (word == NULL)
			{
				while (k >= 0)
					free(words[k--]);
				free(words);
				return (NULL);
			}
			words[k] = word;
			k++;
		}
	}
	words[count] = NULL;
	return (words);
}
