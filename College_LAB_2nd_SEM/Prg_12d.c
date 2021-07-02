/*
    Write a program in c to find the sum of the following series.
        s= 1+ 1/3+ 1/9+ 1/27+ 1/81+ 1/243+...+ 1/3^n

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
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
        p = p * 3;
    }
    printf("\nThe sum is: %f", s);
}