#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name assigned to the file
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, a);

	if (fd == -1 || b == -1)
		return (-1);
	close(fd);

	return (1);

}
