#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints result of the multiplication, followed by a new line.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		p = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", p);
	}
	return (0);
}
