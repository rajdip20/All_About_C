/*
    Assignment on numerical solution of algebraic equation by Bisection method.

    ~~~~~~ Update Date : 14/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x) ((x * x * x) - x - 1)
int main()
{
    float a, b, x0;
    float e = 0.0001;
    do
    {
        printf("Enter the value of a and b: ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0);

    do
    {
        x0 = (a + b) / 2;
        if (f(a) * f(x0) < 0)
        {
            b = x0;
        }
        else
        {
            a = x0;
        }
    } while (fabs(a - b) > e);
    printf("The root is %f", x0);
}