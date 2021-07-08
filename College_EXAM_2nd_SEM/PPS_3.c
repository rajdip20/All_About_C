/*
    Check ISBN number.

    ~~~~~~ Update Date : 08/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int isbn[10];
    int i, t = 1;
    long int x, sum = 0, r = 0;
    printf("Enter your ISBN number: ");
    scanf("%d", &isbn);
    for (i = 0; i < 10; i++)
    {
        x = isbn[i] * t;
        sum += x;
        t++;
    }
    r = sum % 11;
    if (r == 0)
        printf("\nThis is an ISBN number.");
    else
        printf("\nThis is not a ISBN number.");
}