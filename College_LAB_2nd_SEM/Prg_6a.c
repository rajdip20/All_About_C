/*
    Write a program in C to find whether a given number is even or odd.
    (without using modulo division"%")

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if ((n / 2) * 2 == n)
        printf("\nThe number is Even.");
    else
        printf("\nThe number is Odd.");
}