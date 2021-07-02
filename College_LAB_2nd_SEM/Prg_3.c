/*
    Write a C program to find out the area of a circle.
    
    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/
#include<stdio.h>
#define PI 3.14
int main()
{
    float a, r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    a = PI * r * r;
    printf("The area of the circle is: %.2f",a);
}