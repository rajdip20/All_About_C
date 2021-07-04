/*
    Write a program in C to find the sum of the series using function
        s= 1! + 2! + 3! + 4!.....

    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
int func(int);
int main()
{
    int n;
    printf("Enter maximum number of the series: ");
    scanf("%d", &n);
    func(n);
}

int func(int n)
{
    int i, s = 0, m = 1;

    for (i = 1; i <= n; i++)
    {
        m = m * i;
        s += m;
    }
    printf("\nSum of the series is: %d", s);
}