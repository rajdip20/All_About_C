/*
    Print all four digit tech numbers.

    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, n, sum = 0, a, b;
    printf("Four digit tech numbers are: ");
    for (i = 1000; i < 10000; i++)
    {
        a = i / 100;
        b = i % 100;
        sum = a + b;
        j = pow(sum, 2);
        if (i == j)
            printf("\n\t%d ", i);
    }
}