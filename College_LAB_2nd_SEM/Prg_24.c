/*
    Write a C program to find reverse of an integer number.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, r = 0, a = 0, x = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    x = n;
    while (n != 0)
    {
        a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
    printf("\nThe Reverse number of %d is: %d", x, r);
}