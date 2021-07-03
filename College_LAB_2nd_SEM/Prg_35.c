/*
    Write a program in C to find multiplication of two matrixes.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
#define MAX 50
int main()
{
    int m1[MAX][MAX], m2[MAX][MAX], r[MAX][MAX];
    int i, j, k;
    int a1, a2, b1, b2;
    int s = 0;
    printf("Enter first matrix row number: ");
    scanf("%d", &a1);

    printf("\nEnter first matrix column number: ");
    scanf("%d", &a2);

    printf("Enter your first matrix:\n");
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < a2; j++)
            scanf("%d", &m1[i][j]);
    }
    printf("\nEnter second matrix row number: ");
    scanf("%d", &b1);

    printf("\nEnter second matrix column number: ");
    scanf("%d", &b2);

    if (a2 != b1)
    {
        printf("\nMultiplication is not possible");
    }
    else
    {
        printf("Enter your second matrix:\n");
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < b2; j++)
                scanf("%d", &m2[i][j]);
        }

        for (i = 0; i < a1; i++)
        {
            for (j = 0; j < b2; j++)
            {
                for (k = 0; k < b1; k++)
                    s += m1[i][k] * m2[k][j];
                r[i][j] = s;
                s = 0;
            }
        }

        printf("Multiplication of two matrix are:\n");
        for (i = 0; i < a1; i++)
        {
            for (j = 0; j < b2; j++)
                printf("%d ", r[i][j]);
            printf("\n");
        }
    }
}