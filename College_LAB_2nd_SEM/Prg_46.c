/*
    Write a program in C to swap two numbers using pointer & function.

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include<stdio.h>
int func(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter first number a: ");
    scanf("%d", &a);
    printf("\nEnter second number b: ");
    scanf("%d", &b);
    func(&a, &b);
    printf("\nAfter swaping:\n\ta = %d\n\tb = %d", a, b);
}

int func(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}