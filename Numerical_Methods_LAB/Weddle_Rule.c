/*
    Assignments on numerical integration using Weddle rule.

    ~~~~~~ Update Date : 17/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define f(x) (1/sqrt(1-pow(x,2)))

int main()
{
    float a, b, h, sum;
    int n, i, m;
 
    printf("\nEnter the lower limit: ");
    scanf("%f", &a);
    printf("\nEnter the upper limit: ");
    scanf("%f", &b);
    printf("\nEnter the number of sub-intervals: ");
    scanf("%d", &n);
    h = (b - a) / n;
    m = n / 6;
    sum = 0;
    
    if(n%6==0)
    {
        for(i=1;i<=m;i++)
        {
            sum = sum + ((3 * h / 10) * (f(a) + f(a + 2 * h) +5 * f(a + h) + 6 * f(a + 3 * h) + f(a + 4 * h) + 5 * f(a + 5 * h) + f(a + 6 * h)));
            a = a + 6 * h;
        }
        printf("Value of integral is: %f\n", sum);
    }
    else
    {
        printf("Sorry! Weddle rule is not applicable.");
    }
}