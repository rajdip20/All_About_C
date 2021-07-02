/*
    Write a program in C to find the sum of all the even/odd numbers between 1 to 100.

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int esum = 0, osum = 0, i;
    for (i = 1; i <= 100; i = i + 2)
    {
        osum = osum + i;
    }
    printf("\nSum of all odd number 1 to 100 is: %d", osum);
    for (i = 2; i <= 100; i = i + 2)
    {
        esum = esum + i;
    }
    printf("\nSum of all even number 1 to 100 is: %d", esum);
}