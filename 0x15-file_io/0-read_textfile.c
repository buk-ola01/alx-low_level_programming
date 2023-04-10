#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 *	 POSIX standard output.
 * @filename: Name of file to be read.
 * @letters: Number of letters read and printed.
 *
 * Return: Number of letters read and printed
 *	Otherwise - 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t lenw, lenr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenw == -1 || lenr != lenw)
	{
		return (0);
	}

	return (lenw);
}
