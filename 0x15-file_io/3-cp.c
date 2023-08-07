#include "main.h"

#define BUF_SIZE 1024
/**
 * *create_buffer - allocates buffer size of 1024 bytes
 * @file: name of the file
 * Return: 1 (Success)
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - closes files
 * @fd: descriptor to be closed.
 */
void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: argument count
 * @argv:  command-line arguments passed to the program
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *buf;
	int to;
	int from;
	int a;
	int b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		b = write(to, buf, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		a = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
