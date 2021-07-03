/*
    Write a program in C to generate fibonacci series up to Nth term using array.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include <stdio.h>
int main()
{
    int i, n;
    long int arr[40];

    printf("Enter the number range: ");
    scanf("%d", &n);

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("Fibonacci series is: ");
    for (i = 0; i < n; i++)
        printf("% ld ", arr[i]);
}