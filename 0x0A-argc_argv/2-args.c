#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int a = 0;

	for (; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
