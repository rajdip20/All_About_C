/*
    Write a C program to compute simple & compund interest.

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float sint, cint, pri, term, rate, s;
    printf("Enter principal: ");
    scanf("%f", &pri);
    printf("\nEnter term: ");
    scanf("%f", &term);
    printf("\nEnter rate: ");
    scanf("%f", &rate);
    s = pow((1 + rate), term);
    sint = (pri * term * rate) / 100;
    printf("\nSimple interest is: %f", sint);
    cint = (pri * s) - pri;
    printf("\nCompound interest is: %f", cint);
}