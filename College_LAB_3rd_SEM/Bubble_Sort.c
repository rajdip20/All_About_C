/*
    Write a program for Bubble sort.

    ~~~~~~ Update Date : 10/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("\n \t     Welcome to BUBBLE Sort!!  \t \n");
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n Enter %d integers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n Sorted List in ascending order: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}