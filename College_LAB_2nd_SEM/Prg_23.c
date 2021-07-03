/*
    Write a C program for determining whether a number is a Krishna Murthy/strong number or not.
        (e.g. 145 is a strong number because 1! + 4! + 5! =145)

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int s = 0, i, n, d, f, j;
    printf("Enter any number: ");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        d = i % 10;
        f = 1;
        for (j = 1; j <= d; j++)
        {
            f = f * j;
        }
        s = s + f;
        i = i / 10;
    }
    if (s == n)
        printf("\nYes, It's a Krisnamurty Number.");
    else
        printf("\nNo, It's not a Krisnamurty Number.");
}