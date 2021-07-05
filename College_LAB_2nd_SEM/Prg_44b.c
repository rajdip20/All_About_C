/*
    Assignment on numerical integration using Simpson 1/3 rule.

    ~~~~~~ Update Date : 05/07/2021 ~~~~~~
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) 1 / (pow((1 + x), 2))

int main()
{
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;
    printf("Enter lower limit of integration: ");
    scanf("%f", &lower);
    printf("Enter upper limit of integration: ");
    scanf("%f", &upper);
    printf("Enter number of sub intervals: ");
    scanf("%d", &subInterval);

    stepSize = (upper - lower) / subInterval;
    integration = f(lower) + f(upper);
    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        if (i % 2 == 0)
        {
            integration = integration + 2 * f(k);
        }
        else
        {
            integration = integration + 4 * f(k);
        }
    }
    integration = integration * stepSize / 3;
    printf("\nRequired value of integration is: %f", integration);
}