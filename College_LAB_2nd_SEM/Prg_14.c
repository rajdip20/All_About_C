/*
    Write a program in C to find the sum of the digits of a number.

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a, n, s = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 10;
        s = s + a;
        n = n / 10;
    }
    printf("Sum of the all digits: %d", s);
}