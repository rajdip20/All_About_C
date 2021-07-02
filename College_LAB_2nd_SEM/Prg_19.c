/*
    Write a C program to find & print the sum of all the numbers divisible by 7 within a given range.

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int s, e, sum = 0, i;
    printf("Enter starting value: ");
    scanf("%d", &s);
    printf("\nEnter ending value: ");
    scanf("%d", &e);
    for (i = s; i <= e; i++)
    {
        if (i % 7 == 0)
        {
            sum = sum + i;
        }
    }
    printf("\nThe answer is: %d", sum);
}