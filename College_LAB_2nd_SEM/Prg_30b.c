/*
    Write a C program to sort the number in an array using insertion sort.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, j, t;
    int a[64];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i <= n - 1; i++)
    {
        j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            t = a[j];
            a[j] = a[j - 1];
            a[j - 1] = t;
            j--;
        }
    }
    printf("\nSorted list in ascending order: ");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", a[i]);
    }
}