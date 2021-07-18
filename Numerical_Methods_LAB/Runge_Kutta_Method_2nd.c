/*
    Assignments on ordinary differential equation using Runga-Kutta method 2nd order.

    ~~~~~~ Update Date : 18/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x, y) (((y * y) - x) / y)

int main()
{
    float x0, y0, x1, h, k1, k2, y1;
    int n;
    printf("Enter the Initial Condition:\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("\ny0 = ");
    scanf("%f", &y0);
    printf("\nx1 = ");
    scanf("%f", &x1);
    printf("\nn = ");
    scanf("%d", &n);

    h = (x1 - x0) / n;
    do
    {
        k1 = h * f(x0, y0);
        k2 = h * f((x0 +h), (y0 + k1));
        y1 = y0 + ((k1 + k2)/2);
        x0 = x0 + h;
        y0 = y1;
    } while (x0 < x1);
    printf("\nThe final value of y is %f", y1);
}