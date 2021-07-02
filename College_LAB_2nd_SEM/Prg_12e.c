/*
    Write a program in c to find the sum of the following series.
        s= 1!+ 2!+ 3!+ 4!+.....+ n!

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int i, n, s = 0, m = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        m = m * i;
        s = s + m;
    }
    printf("\nThe sum is: %d", s);
}