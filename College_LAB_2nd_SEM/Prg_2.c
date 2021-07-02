/*
    Write a program in C to make a simple calculator.
    [Input two value & calculate their addition,subtraction,multiplication,division]
    
    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a, b, add, sub, mul;
    float div;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    printf("\nAddition: %d",add);
    printf("\nSubtraction: %d",sub);
    printf("\nMultiplication: %d",mul);
    printf("\nDivition: %f",div);
}