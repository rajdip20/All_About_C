/*
    Assignment on ordinary diffrential equation by Euler's Method.

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include <stdio.h>
float func(float, float);
int main()
{
    float x, y, z, n, i;
    printf("Enter the initial condition for x:");
    scanf("%f", &x);
    printf("\nEnter the initial condition for y:");
    scanf("%f", &y);
    printf("\nEnter the value of x for which y is required:");
    scanf("%f", &z);
    printf("\nEnter the step-width n:");
    scanf("%f", &n);
    printf("\n x\t y\n");

    while (x <= n)
    {
        i = z * func(x, y);
        y = y + i;
        x = x + z;
        printf("%.3f\t %.3f\n", x, y);
    }
}

float func(float x, float y)
{
    float m;
    m = x * x + y;
    return m;
}