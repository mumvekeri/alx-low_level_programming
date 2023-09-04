#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it to the POSIX
 * @letters: is the number of letters it should read and print.
 * @filename: name assigned to a file.
 * Return:  actual number of letters it could read and print. Reurn 0 if,
 * the file can not be opened or read, if filename is NULL, or if write fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	ssize_t result;
	ssize_t fd;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	i = read(fd, buffer, letters);
	result = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(fd);
	return (result);
}

