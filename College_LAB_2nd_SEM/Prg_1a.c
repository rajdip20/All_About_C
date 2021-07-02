/*
    Write a program in C to swap the value of two Variables with 3rd variable.
    
    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("\nEnter value of b: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter swaping\n\tValue of a: %d\n\tValue of b: %d",a,b);
}