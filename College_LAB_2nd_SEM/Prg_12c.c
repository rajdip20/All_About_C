/*
    Write a program in c to find the sum of the following series.
        s= 1+ 1/2+ 1/4+ 1/8+ 1/16+...+ 1/2^n

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    float s = 0.0, p = 1.0;
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++)
    {
        s = s + (1 / p);
        p = p * 2;
    }
    printf("\nThe sum is: %f", s);
}