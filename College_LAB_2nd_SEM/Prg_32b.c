/*
    Write a program in C to search an element in an array(binary search).

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, k, f, l, m, x = 0;
    int a[64];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &k);
    f = 0;
    l = n - 1;

    while (f <= l)
    {
        m = (f + l) / 2;
        if (k == a[m])
        {
            x = 1;
            break;
        }
        else
        {
            if (k < a[m])
                l = m - 1;
            else
                f = m + 1;
        }
    }
    if (x == 1)
        printf("\nValue found at %d position.", m + 1);
    else
        printf("\nValue not found");
}