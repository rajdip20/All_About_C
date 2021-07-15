/*
    Assignment on numerical solution of algebraic equation by Regula-falsi method.

    ~~~~~~ Update Date : 15/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x) (3 * (x * x * x) - 9 * (x * x) + 8)
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
        x0 = (a * f(b) - b * f(a)) / (f(b) - f(a));
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