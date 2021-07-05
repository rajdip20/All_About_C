/*
    Write a program in C to find max element from an array using function.

    ~~~~~~ Update Date : 05/07/2021 ~~~~~~
*/

#include<stdio.h>
#define MAX 30
int func(int);
int main()
{
    int n;
    printf("Enter how many number you want to input: ");
    scanf("%d", &n);
    func(n);
}

int func(int n)
{
    int i, m;
    int a[MAX];
    printf("\nEnter %d number: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    m = a[0];
    for (i = 0; i < n; i++)
    {
        if (m < a[i])
            m = a[i];
    }
    printf("Maximum number from the array is: %d", m);
}