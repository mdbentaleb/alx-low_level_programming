#include "main.h"

/**
 * file1fl - Print error message if can't read file
 * @file: Name of the file that can't be read
 */
void file1fl(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file2fl - Print error message if can't write to file
 * @file: Name of the file that can't be write to
 */
void file2fl(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * closefl - Print error message if file can't close
 * @fd: File descriptor of the file
 */
void closefl(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copy the content of one file to another
 * @argc: Number of arguments received
 * @argv: Array of arguments received
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file1, file2, file1rd, file2wr, closed;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		file1fl(argv[1]);
	if (argv[2] == NULL)
		file2fl(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		file1fl(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (file2 == -1)
		file2fl(argv[2]);
	file1rd = read(file1, buf, BUFSIZE);
	if (file1rd == -1)
		file1fl(argv[1]);
	while (file1rd > 0)
	{
		file2wr = write(file2, buf, file1rd);
		if (file2wr != file1rd)
			file2fl(argv[2]);
		file1rd = read(file1, buf, BUFSIZE);
		if (file1rd == -1)
			file1fl(argv[1]);
	}
	closed = close(file1);
	if (closed == -1)
		closefl(file1);
	closed = close(file2);
	if (closed == -1)
		closefl(file2);
	return (0);
}
