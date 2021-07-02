/*
    Write a C program for determining whether a number is a perfect number or not.
        (e.g. 28 is a perfect number because sum of the divisor of 28=1+2+4+7+14=28).

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= (n - 1); i++)
    {
        r = n % i;
        if (r == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("\nYes! It's a perfect number.");
    else
        printf("\nNope! It's not a perfect number.");
}