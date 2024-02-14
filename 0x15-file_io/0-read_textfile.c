#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *	and prints it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters to read
 * Return: number bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wt;
	char *bf;

	if (filename == NULL)
		return (0);

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(bf);
		return (0);
	}

	rd = read(fd, bf, letters);
	if (rd == -1)
	{
		free(bf);
		close(fd);
		return (0);
	}
	close(fd);

	wt = write(STDOUT_FILENO, bf, rd);
	if (wt == -1)
	{
		free(bf);
		return (0);
	}
	if (wt != rd)
		return (0);
	return (rd);
}
