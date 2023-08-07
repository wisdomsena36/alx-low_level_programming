#include "main.h"

/**
 * _strlen - It computes the length of a string.
 * @s: The input string.
 *
 * Return: Length of the string, or -1 if string is NULL.
 */
ssize_t _strlen(const char *s)
{
	ssize_t len;

	if (!s)
		return (-1);

	len = 0;
	while (*s++)
		++len;

	return (len);
}

/**
 * create_file - It creates a file.
 * @filename: The name of the file.
 * @text_content: The text to write to file.
 *
 * Return: 1 on succeed. Otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
		w = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (w < 0)
		return (-1);
	return (1);
}
