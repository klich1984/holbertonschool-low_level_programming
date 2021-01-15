#include "holberton.h"

/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output.
* @filename: file that read
* @letters: - is the number of letters it should read and print
* Return: - the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr_letters;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	nr_letters = read(fd, buf, letters);

	write(STDOUT_FILENO, buf, nr_letters);

	free(buf);
	close(fd);
	return (nr_letters);
}
