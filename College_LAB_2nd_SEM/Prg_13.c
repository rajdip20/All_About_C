/*
    Write a program in C to generate the fibonacci series up to Nth term.
        1+1+2+3+5+8+13+...+n

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, s = 0, a = 1, b = 1, c;
    printf("Enter term: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        s = s + a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nSum of the series: %d", s);
}