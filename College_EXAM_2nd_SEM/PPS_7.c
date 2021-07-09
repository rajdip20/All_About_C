/*
    Find integer divisible by 11.

    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, even = 0, odd = 0, i, m, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    for (i = 1; m != 0; m = m / 10)
    {
        r = m % 10;
        if (i % 2 != 0)
            odd += r;
        else
            even += r;
        i++;
    }
    if (odd == even)
        printf("\nThe number %d is divisible by 11.", n);
    else
        printf("\nThe number %d is not divisible by 11.", n);
}