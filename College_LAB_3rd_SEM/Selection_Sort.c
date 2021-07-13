/*
    Write a program for Selection sort.

    ~~~~~~ Update Date : 13/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a[100], n, i, j, temp, min;
    printf("\n \t     Welcome to Selection Sort!!  \t \n");
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n Enter %d integers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < (n - 1); i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("\n Sorted List in ascending order: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}