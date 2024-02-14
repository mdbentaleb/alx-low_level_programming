#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: text to write
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	size_t i = 0;
	ssize_t wt = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content && text_content[i]; i++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (i)
		wt = write(fd, text_content, i);
	close(fd);
	if (wt == -1)
		return (-1);
	return (1);
}

