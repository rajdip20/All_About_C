/*
    Assignments on ordinary differential equation using Runga-Kutta method 4th order.

    ~~~~~~ Update Date : 18/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x, y) (x * y)
int main()
{
    float x0, x1, y0, y1, k1, k2, k3, k4, k, h;
    printf("Enter the Initial Condition:\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("\ny0 = ");
    scanf("%f", &y0);
    printf("\nx1 = ");
    scanf("%f", &x1);
    printf("\nh = ");
    scanf("%d", &h);
    do
    {
        k1 = h * f(x0, y0);
        k2 = h * f((x0 + (h / 2)), (y0 + (k1 / 2)));
        k3 = h * f((x0 + (h / 2)), (y0 + (k2 / 2)));
        k4 = h * f((x0 + h), (y0 + k3));
        k = ((k1 + 2 * k2 + 2 * k3 + k4) / 6.0);
        y1 = y0 + k;
        x0 = x0 + h;
        y0 = y1;
    }while (x0<x1);
    printf("solution = %f",y1);
}