/*
    Impliment string library function using pointer: strcat()

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char *a[50], *b[50];
    printf("Enter first string: ");
    gets(a);
    printf("\nEnter second string: ");
    gets(b);
    strcat(&a, &b);
    printf("\nAfter concatenate the string is: %s", a);
}