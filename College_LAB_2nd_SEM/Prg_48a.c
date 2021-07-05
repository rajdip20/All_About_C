/*
    Impliment string library function using pointer: strlen()

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int l;
    printf("Enter a string: ");
    gets(a);
    l = strlen(&a);
    printf("Length of the string is: %d", l);
}