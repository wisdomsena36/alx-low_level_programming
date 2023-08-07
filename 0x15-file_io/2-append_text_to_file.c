#include "main.h"

/**
 * _strlen - It computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of a string, or -1 if string is NULL
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
 * append_text_to_file - It appends text to the end of a file.
 * @filename: The name of the file to append text to.
 * @text_content: The text to append to the filename.
 *
 * Return: 1 on success. Otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
		w = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (w < 0)
		return (-1);
	return (1);
}
