/*
    Matrix problem.

    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include <stdio.h>
int main()
{
    int r, c, i, j, x[10][10];
    printf("Enter row number: ");
    scanf("%d", &r);
    printf("enter column number: ");
    scanf("%d", &c);
    if (r == c)
    {
        printf("Enter elements of the matrix:\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                scanf("%d", &x[i][j]);
        }
        printf("Lower triangular matrix is:\n ");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
            {
                if (i < j)
                {
                    printf("0");
                    printf("\t");
                }
                else
                    printf("%d\t", x[i][j]);
            }
            printf("\n");
        }
        printf("\nUpper triangular matrix is:\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
            {
                if (i > j)
                {
                    printf("0");
                    printf("\t");
                }
                else
                    printf("%d\t", x[i][j]);
            }
            printf("\n");
        }
        printf("\nLeft diagonal elements are:\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (i == j)
                    printf("\n%d", x[i][j]);
            }
        }
        printf("\nRight diagonal elements are:\n");
        for (i = 0; i < r; i++)
        {
            printf("\n%d", x[i][r - i - 1]);
        }
    }
    else
    {
        printf("Not possible.");
    }
}