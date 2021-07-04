/*
    Write a program in C to Character Count.
        (without using string library)
        
    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    char s[100];
    int i, n = 0;
    printf("\nEnter a string: ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        n++;
    printf("\nLength of input string: %d", n);
}