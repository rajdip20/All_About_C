/*
    Write a program in c to find the sum of the following series.
        s= 1+2+3+4+...+n(input n).

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int s = 0, i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        s = s + i;
        printf("The sum is: %d", s);
}