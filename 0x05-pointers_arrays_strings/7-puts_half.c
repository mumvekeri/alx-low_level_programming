#include "main.h"
#include <stdio.h>
/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
	int a;
	int n;
	int c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;

	n = (c / 2);

	if ((c % 2) == 1)
		n = ((c + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}
