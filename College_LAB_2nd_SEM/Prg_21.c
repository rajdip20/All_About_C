/*
    Write a C program for determining how many perfect numbers exist in a given range.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int s, e, i, sum = 0, p;
    printf("Enter starting number:");
    scanf("%d", &s);
    printf("\nEnter ending number:");
    scanf("%d", &e);
    printf("\nThe perfect numbers between %d and %d are: ", s, e); 
    for (i = s; i <= e; i++)
    {
        p = 1;
        while (p <= (i / 2))
        {
            if (i % p == 0)
                sum = sum + p;
            p++;
        }
        if (sum == i)
            printf("%d ", i);
        sum = 0;
    }
}