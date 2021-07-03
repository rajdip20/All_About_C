/*
    Write a program in C to search an element in an array(linear search).

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, k, f = 0;
    int a[64];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &k);
    
    for (i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("\nPresent in the array at position %d.", i + 1);
    else
        printf("\nElement is not present.");
}