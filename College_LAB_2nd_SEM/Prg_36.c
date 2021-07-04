/*
    Write a program in C to find transpose of a matrix.

    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int r, c, i, j;
    int m[10][10], t[10][10];
    printf("Enter row number: ");
    scanf("%d", &r);
    printf("\nEnter column number: ");
    scanf("%d", &c);
    printf("Enter your matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            t[j][i] = m[i][j];
    }

    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}