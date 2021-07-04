/*
    Write a program in C to find factorial of a given number using function.
    
    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
long func(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d! = %ld", n, func(n));
}

long func(int n)
{
    int c;
    long r = 1;
    for (c = 1; c <= n; c++)
        r = r * c;
    return r;
}