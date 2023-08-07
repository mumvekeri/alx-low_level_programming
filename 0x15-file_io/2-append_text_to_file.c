#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure or 0 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);
	int fd;
	int a;
	int c = 0;

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			a++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	a = write(fd, text_content, c);

	if (fd == -1 || a == -1)
		return (-1);
	close(fd);
	return (1);
}
