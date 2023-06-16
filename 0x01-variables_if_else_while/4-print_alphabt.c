#include <stdio.h>
/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
char lo;

for (lo = 'a'; lo <= 'z'; lo++)
{
if (lo != 'q' && lo != 'e')
{
putchar(lo);
}
putchar('\n');
return (0);
}

