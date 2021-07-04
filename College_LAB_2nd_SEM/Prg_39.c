/*
    Write a program in C to find the GCD and LCM of two given number using function.

    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
int func(int, int);
int main()
{
    int x, y;
    printf("Enter two Numbers: ");
    scanf("%d %d", &x, &y);
    func(x, y);
}

int func(int x, int y)
{
    int gcd, lcm, r, num, den;
    if (x > y)
    {
        num = x;
        den = y;
    }
    else
    {
        num = y;
        den = x;
    }
    r = num % den;

    while (r != 0)
    {
        num = den;
        den = r;
        r = num % den;
    }
    gcd = den;
    lcm = x * y / gcd;

    printf("\nGCD of %d and %d = %d", x, y, gcd);
    printf("\nLCM of %d and %d = %d", x, y, lcm);
}