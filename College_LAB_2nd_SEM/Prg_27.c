/*
    Write a program in C to implement the binary to decimal conversation.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, bi, dec = 0, base = 1, rem;

    printf("Enter the Binary Number with the combination of 0s and 1s: ");
    scanf("%d", &bi);
    n = bi;

    while (n > 0)
    {
        rem = n % 10;
        dec = dec + rem * base;
        n = n / 10;
        base = base * 2;
    }
    printf("\nThe Decimal Value of %d is: %d", bi, dec);
}