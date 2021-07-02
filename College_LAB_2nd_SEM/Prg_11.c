/*
    Write a program in C to compute factorial of a number.

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, a = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        a = a * i;
        printf("\nFactorial of the number is: %d", a);
}