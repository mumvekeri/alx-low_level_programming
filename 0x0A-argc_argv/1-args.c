#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

