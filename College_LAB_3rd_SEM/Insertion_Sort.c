/*
    Write a program for Insertion sort.

    ~~~~~~ Update Date : 12/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int i, j, n, x, a[20];
    printf("\n Enter how many elements you want in the array: ");
    scanf("%d", &n);
    printf("\n enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf(" A|%d|=", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        x = a[i];
        for (j = i - 1; j >= 0 && a[j] > x; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = x;
    }
    printf("\n The elements after sorting: \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}