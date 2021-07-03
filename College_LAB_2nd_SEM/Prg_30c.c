/*
    Write a program in C to sort the number in an array using selection sort.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, j, p, s;
    int a[64];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        p = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[p] > a[j])
                p = j;
        }
        if (p != i)
        {
            s = a[i];
            a[i] = a[p];
            a[p] = s;
        }
    }
    printf("\nSorted list in ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}