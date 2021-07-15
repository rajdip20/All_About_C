/*
    Assignment on numerical solution of algebraic equation by Newton-Raphson method.

    ~~~~~~ Update Date : 15/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x) ((x * x * x) - 8 * x - 4)
#define g(x) ((2 * x * x) - 8)
int main()
{
    float a, b, x0;
    float e = 0.001;
    do
    {
        printf("Enter the value of a and b: ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0);
    x0 = (a + b) / 2;
    do
    {
        x0 = x0 - (f(x0) / g(x0));
    } while (fabs(f(x0)) > e);
    printf("The root is %f", x0);
}