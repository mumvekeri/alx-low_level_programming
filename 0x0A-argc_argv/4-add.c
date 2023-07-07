#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: 0(success).
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int a;
	int b;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
