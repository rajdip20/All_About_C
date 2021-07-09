/*
    Make a pattern.
    
    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int i, j, n, c = 0, d = 0, k = 0;
    printf("Enter row number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
            c++;
        }
        printf(" ");
        while (k != 2 * i - 1)
        {
            if (c <= n - 1)
            {
                printf("%d", i + k);
                c++;
            }
            else
            {
                d++;
                printf("%d", (i + k - 2 * d));
            }
            k++;
            printf(" ");
        }
        d = c = k = 0;
        printf("\n");
    }
}