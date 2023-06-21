#include <stdio.h>

/**
* isalpha -  a function that checks for alphabetic character.
*@c:character to check if it islowercase
* Return: 1 if lowercase, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
