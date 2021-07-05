/*
    Assignment on ordinary diffrential equation by Runga-Kutta Method.

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include <stdio.h>
float f(float, float);
int main()
{
    float a, b, c, d, m, y, x, n, z, x0, y0;
    printf("Enter the initial condition for x: ");
    scanf("%f", &x);
    printf("\nEnter the initial condition for y: ");
    scanf("%f", &y);
    printf("\nEnter the value of x for which y is required: ");
    scanf("%f", &z);
    printf("\nenter the step-width n: ");
    scanf("%f", &n);
    printf("\n x\t y\n");

    x0 = x;
    y0 = y;
    while (x < z)
    {
        a = f(x0, y0);
        b = f((x0 + n / 2), (y0 + a * n / 2));
        c = f((x0 + n / 2), (y0 + b * n / 2));
        d = f((x0 + n), (y0 + c * n));
        m = ((a + 2 * b + 2 * c + d) / 6);
        y = y + m * n;
        x = x + n;
        printf("%.3f\t %.3f\n", x, y);
    }
}
float f(float x, float y)
{
    float m;
    m = x * x + y;
    return m;
}