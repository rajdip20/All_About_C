/*
    Write a program in C to find the sum of two matrixes.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include <stdio.h>
int main()
{
    int i, j, a1, b1, a2, b2;
    printf("Enter first matrix row number: ");
    scanf("%d", &a1);
    printf("\nEnter first matrix column number: ");
    scanf("%d", &a2);
    printf("\nEnter second matrix row number: ");
    scanf("%d", &b1);
    printf("\nEnter second matrix column number: ");
    scanf("%d", &b2);
    if (a1 == b1 && a2 == b2)
    {
        int m1[a1][a2], m2[b1][b2], r[b1][b2];
        printf("\nEnter first matrix:\n");
        for (i = 0; i < a1; i++)
        {
            for (j = 0; j < a2; j++)
                scanf("%d", &m1[i][j]);
        }
        printf("\nEnter second matrix:\n");
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < b2; j++)
                scanf("%d", &m2[i][j]);
        }
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < b2; j++)
                r[i][j] = m1[i][j] + m2[i][j];
        }
        printf("Sum of two matrix:\n");
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < b2; j++)
                printf("%d ", r[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("\nAddition not possible.");
    }
}