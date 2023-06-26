#include "main.h"
#include <stdio.h>
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
	int cha = 0;
	int t = 0;
	char *y = str;
	int h;

	while (*y != '\0')
	{
		y++;
		cha++;
	}
	t = cha - 1;
	for (h = 0 ; h <= t ; h++)
	{
		if (h % 2 == 0)
	{
		putchar(str[h]);
	}
	}
	putchar('\n');
}
