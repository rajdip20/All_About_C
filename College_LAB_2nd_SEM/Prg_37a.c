/*
    Write a program in C to reverse a string.
        (without using string library)

    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    char a[100];
    int i, n = 0;
    printf("Enter a string: ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        n++;
    }
    printf("\nReverse string is: ");
    for (; n >= 0; n--)
    {
        printf("%c", a[n]);
    }
}