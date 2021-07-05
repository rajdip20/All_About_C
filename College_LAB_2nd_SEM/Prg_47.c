/*
    Write a program in C to sort an array of numbers using pointer & function.

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include<stdio.h>
int func(int n, int *p);
int main()
{
    int n, i;
    int a[64];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    func(n, a);
}

int func(int n, int *p)
{
    int i, j, a;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + j) < *(p + i))
            {
                a = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = a;
            }
        }
    }
    printf("after sorting:");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
}