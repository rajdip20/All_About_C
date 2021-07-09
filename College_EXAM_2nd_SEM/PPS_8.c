/*
    Play with binary.

    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a[30], b[30], c[30], d[30], s[30];
    int f, n, i;
    int x = 0, k = 0, y = 0, z = 0, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        for (i = i - 1; i >= 0; i--)
        {
            b[x] = a[i];
            x++;
        }
        printf("Binary of the given number is: ");
        for (i = 0; i < x; i++)
        {
            printf("%d", b[i]);
            if (b[i] == 1)
                k++;
        }
        printf("\nThe number of 1 is: %d", k);
    }
    else
    {
        n = -(n);
        for (i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        for (i = i - 1; i >= 0; i--)
        {
            b[x] = a[i];
            x++;
        }
        for (i = 0; i < x; i++)
        {
            if (b[i] == 0)
            {
                c[y] = 1;
                y++;
            }
            else
            {
                c[y] = 0;
                y++;
            }
        }
        for (i = 0; i < x; i++)
        {
            if (i == x - 1)
                d[i] = 1;
            else
                d[i] = 0;
        }
        f = x;
        for (i = x - 1; i >= 0; i--)
        {
            sum = (c[i] + d[i] + z) % 2;
            z = (c[i] + d[i] + z) / 2;
            s[f] = sum;
            f--;
        }
        printf("The 2's compliment is: ");
        for (i = 1; i <= x; i++)
        {
            printf("%d", s[i]);
            if (s[i] == 1)
                k++;
        }
        printf("\nThe number of 1: %d", k);
    }
}