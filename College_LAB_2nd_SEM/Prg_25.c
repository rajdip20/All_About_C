/*
    Write a C program to find SIN or COS value of an angle from taylor series.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i = 1;
    float sum_old = 0, sum_new = 0;
    do
    {
        sum_old = sum_new;
        sum_new += (float)pow(i, -1);
        i++;
    } while (fabs(sum_new - sum_old) >= 0.000001);
    printf("\nSum of the series after %dth iteration is %f", --i, sum_new);
}