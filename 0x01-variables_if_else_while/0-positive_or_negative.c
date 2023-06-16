#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void) {
    int n;

    // Generate a random number
    srand(time(0));
    n = rand();

    printf("The number is %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

return (0);
}

