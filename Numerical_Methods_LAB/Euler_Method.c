/*
    Assignments on ordinary differential equation Euler’s method.

    ~~~~~~ Update Date : 14/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x, y) (pow(x, 3) + y)

int main()
{
    float x0, y0, x = 0.1 , h = 0.01, y;
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    do
    {
        y = y0 + h * f(x0, y0);
        x0 = x0 + h;
        y0 = y;
    } while(x0 < x);
    printf("\nThe final value is: %f", y);
}
