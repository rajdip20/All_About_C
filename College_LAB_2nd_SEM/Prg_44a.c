/*
    Assignment on numerical integration using Trapezoidal rule.

    ~~~~~~ Update Date : 05/07/2021 ~~~~~~
*/

#include <stdio.h>
#include <math.h>
float func(float);
int main()
{
    int n, i;
    float a, b, c, s, m;
    printf("Enter the upper limit: ");
    scanf("%f", &a);
    printf("\nEnter the lower limit: ");
    scanf("%f", &b);
    printf("\nEnter the interval: ");
    scanf("%d", &n);

    c = (a - b) / n;
    s = func(a) + func(b);
    i = 2;
    while (i <= n)
    {
        s = s + 2 * func(b + (i - 1) * c);
        i++;
    }
    m = c * s / 2;
    printf("\nAnswer is: %f", m);
}

float func(float x)
{
    float a;
    a = 1 / (sqrt(1 + x * x));
    return a;
}