/*
    Write a program in c to find the sum of the following series.
        s= 1+3+5+7+...+n(input n).

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int s = 0, i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i = i + 2)
        s = s + i;
        printf("The sum is: %d", s);
}