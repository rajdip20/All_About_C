/*
    Write a program in C to check whather a number is prime or not?

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a, i;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            break;
        }
    }
    if (i > a / 2)
        printf("\nThe number is prime.");
    else
        printf("This is not a prime number.");
}