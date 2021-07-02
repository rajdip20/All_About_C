/*
    Write a C program to convert temperature from F to C & vice-versa.

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter the value in Fahrenheit: ");
    scanf("%f", &F);
    C = ((F - 32) * 5) / 9;
    printf("\nTemperature in Celsius: %.3f", C);
    printf("\nEnter the value in Celsius: ");
    scanf("%f", &C);
    F = ((9 * C) / 5) + 32;
    printf("\nTemperature in Fahrenheit: %.3f", F);
}