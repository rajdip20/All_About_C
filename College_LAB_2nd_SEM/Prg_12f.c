/*
    Write a program in c to find the sum of the following series.
    s= 1+ 11+ 111+ 1111+......+ upto Nth term.

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, s = 0, t = 1;
    printf("Enter term: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s + t;
        t = (t * 10) + 1;
    }
    printf("\nThe sum is: %d", s);
}