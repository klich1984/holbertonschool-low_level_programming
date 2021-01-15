#include "holberton.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: - is the name of the file to create
* @text_content: -  is a NULL terminated string to write to the file
* Return: - 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t res_write = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = _strlen(text_content);

	res_write = write(fd, text_content, len);
	if (res_write == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - function what returns the length of a string
 *
 *@s: - definition variable type pointers
 *
 *Return: Value of the i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
