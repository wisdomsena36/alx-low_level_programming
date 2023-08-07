#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * safe_close - It closes a file descriptor and print an
 * error message upon failure
 * @fd: The file descriptor to close.
 *
 * Return: 0 on success, -1 on failure.
 */
int safe_close(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);

}

/**
 * _read - It read from a file and print an error message upon failure.
 * @filename: The name of the file to read from.
 * @fd: The file descriptor to read from.
 * @buf: The buffer to write to.
 * @size: The number of bytes to read.
 *
 * Return: Number of bytes read, or -1 on failure.
 */
ssize_t _read(const char *filename, int fd, char *buf, size_t size)
{
	ssize_t bytes_rd = read(fd, buf, size);

	if (bytes_rd > -1)
		return (bytes_rd);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);
}

/**
 * _write - It writes to a file and print an error message upon failure.
 * @filename: The name of the file to write to.
 * @fd: The file descriptor to write to.
 * @buf: The buffer to read from.
 * @size: The number of bytes to write.
 *
 * Return: Number of bytes written, or -1 on failure
 */
ssize_t _write(const char *filename, int fd, const char *buf, size_t size)
{
	ssize_t bytes_w = write(fd, buf, size);

	if (bytes_w > -1)
		return (bytes_w);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}

/**
 * main - It copies a file's contents to another file.
 * @argc: The argument count.
 * @argv: The argument values.
 *
 * Return: Always 1
 */
int main(int argc, const char *argv[])
{
	int fd_in, fd_out;
	ssize_t bytes_read;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(fd_in);
		exit(99);
	}
	while ((bytes_read = _read(argv[1], fd_in, buffer, BUFSIZE)))
	{
		if (bytes_read < 0)
		{
			safe_close(fd_in);
			safe_close(fd_out);
			exit(98);
		}
		if (_write(argv[2], fd_out, buffer, bytes_read) < 0)
		{
			safe_close(fd_in);
			safe_close(fd_out);
			exit(99);
		}
	}
	if ((safe_close(fd_in) | safe_close(fd_out)) < 0)
		exit(100);
	return (0);
}
