#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Name of the file to be created.
 * @text_content: text to write to the file.
 *
 * Return: On success - 1
 *	Otehrwise - (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (!text_content)
		text_content = "";

	len = strlen(text_content);

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
