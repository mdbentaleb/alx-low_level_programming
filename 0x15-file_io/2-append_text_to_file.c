#include "main.h"

/**
 * append_text_to_file - a function that appends text
 *	at the end of a file.
 * @filename: file name
 * @text_content: content to append
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (sz = 0; text_content && text_content[sz]; sz++)
		;
	if (write(fd, text_content, sz) != sz)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

