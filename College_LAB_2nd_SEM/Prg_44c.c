/*
    Assignment on numerical integration using Weddle's rule.

    ~~~~~~ Update Date : 05/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
float f(float);
int main()
{
    float a, b, c, s = 0;
    int i, n, m;
    printf("Enter the upper limit: ");
    scanf("%f", &b);
    printf("\nEnter the lower limit: ");
    scanf("%f", &a);
    printf("\nEnter the interval: ");
    scanf("%d", &n);

    c = (b - a) / n;
    m = n / 6;
    s = 0;
    if (n % 6 == 0)
    {
        for (i = 1; i <= m; i++)
        {
            s = s + ((3 * c / 10) * (f(a) + f(a + 2 * c) + 5 * f(a + c) + 6 * f(a + 3 * c) + f(a + 4 * c) + 5 * f(a + 5 * c) + f(a + 6 * c)));
            a = a + 6 * c;
        }
        printf("\nAnswer is: %f", s);
    }
    else
        printf("\nWeddle’s rule is not applicable.");
}

float f(float x)
{
    float y;
    y = x * x - 10;
    return y;
}