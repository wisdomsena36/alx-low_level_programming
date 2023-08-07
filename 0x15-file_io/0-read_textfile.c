#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - It reads a text file and prints
 * it to the POSIX standard output.
 * @filename: The variable pointer.
 * @letters: The number of letters.
 * Return: Actual number of letters it could read and print,
 * 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t l;
	ssize_t w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	l = read(file, txt, letters);

	w = write(STDOUT_FILENO, txt, l);

	close(file);

	return (w);
}
