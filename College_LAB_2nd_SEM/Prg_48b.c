/*
    Impliment string library function using pointer: strcpy()

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char *a[50], *l[50];
    printf("Enter a string: ");
    gets(a);
    strcpy(&l, &a);
    printf("\nThe given string is: %s", a);
    printf("\nCopy of the string is: %s", l);
}