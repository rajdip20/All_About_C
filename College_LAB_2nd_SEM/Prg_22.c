/*
    Write a C program for determining whether a number is an Armstrong number or not.
        (e.g. 153 is an Armstrong number because 1^3 + 5^3 + 3^3 =153)

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, a, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        a = i % 10;
        sum = sum + (a * a * a);
        i = i / 10;
    }
    if (n == sum)
        printf("\nIt's an Armstrong number");
    else
        printf("\nIt's not an Armstrong number");
}