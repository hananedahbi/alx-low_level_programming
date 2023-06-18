#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n every time
 * it executes and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("The number is: %d\n", n);
    if (n > 0)
        printf("The number is positive.\n");
    else if (n < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
    return 0;
}
