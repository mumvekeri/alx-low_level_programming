#include <stdio.h>

/**
* _isalpha -  a function that checks for alphabetic character.
*@c:character to check if it islowercase
* Return: 1 if lowercase, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
        {
		return (0);
	}
}
