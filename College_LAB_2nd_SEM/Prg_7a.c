/*
    Write a C program to find the largest of three numbers.

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    printf("\nEnter the value of c: ");
    scanf("%d", &c);

    if((a > b) && (a > c))
        printf("\nThe largest number is: %d", a);
    else
        if((b > a) && (b > c))
            printf("\nThe largest number is: %d",b);
        else
            printf("\nThe largest number is: %d", c);
}