#include "main.h"
#include <stdio.h>
/**
* _islower - check if character is lowercase
* @c: The character to be checked
* Return: 1 if letter is lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
        {
		return (1);
	}
		return (0);
}
