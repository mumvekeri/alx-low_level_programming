#include <stdio.h>
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
*/
void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			putchar(b);
		putchar('\n');
	}
}
