/*
    Write a program in c to sort the number in an array using bubble sort.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, c, d, s;
    int a[64];
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers: ", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &a[c]);
    }

    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (a[d] > a[d + 1])
            {
                s = a[d];
                a[d] = a[d + 1];
                a[d + 1] = s;
            }
        }
    }
    printf("\nSorted list in ascending order: ");
    for (c = 0; c < n; c++)
        printf("%d ", a[c]);
}