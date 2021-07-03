/*
    Write a program in C to implement the decimal to binary conversation.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int i = 0, n, j, x;
    int b[32];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("\nBinary value of %d is: ", x);
    for (j = (i - 1); j >= 0; j--)
        printf("%d", b[j]);
}