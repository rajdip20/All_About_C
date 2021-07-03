/*
    Write a program in C to check maximum and minimum number in an array.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int i, n, min, max;
    int a[50];

    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("\nEnter elements in the array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];

    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];

        if (max < a[i])
            max = a[i];
    }

    printf("\nMaximum number in the array is:%d", max);
    printf("\nMinimum number in the array is:%d", min);
}