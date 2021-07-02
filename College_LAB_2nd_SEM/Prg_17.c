/*
    Write a program in C to find the sum of all prime numbers between a given ranges of numbers.

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include <stdio.h>
int main()
{
    int s, e, sum = 0, i, j, p;
    printf("Enter starting number: ");
    scanf("%d", &s);
    printf("\nEnter ending number: ");
    scanf("%d", &e);
    for (i = s; i <= e; i++)
    {
        p = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                p++;
                break;
            }
        }
        if (p == 0)
        {
            sum = sum + i;
        }
    }
    printf("\nSum of all prime numbers between %d to %d: %d", s, e, sum);
}