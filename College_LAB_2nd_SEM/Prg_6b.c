/*
    Write a program in C to find whether a given number is even or odd.
    (using modulo division"%")

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("\nThe number is Even.");
    else
        printf("\nThe number is Odd.");
}