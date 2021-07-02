/*
    Write a program in C to check whether a year is leap year or not.
    (using Ternary operator)

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    (((n % 400 == 0) || (n % 4 == 0)) && (n % 100 != 0)) ? printf("\nIt's a leep year.") : printf("\nIt's not a leep year.");
}