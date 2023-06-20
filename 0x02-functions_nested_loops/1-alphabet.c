#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	putchar('\n');
}
