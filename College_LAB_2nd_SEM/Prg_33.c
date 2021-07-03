/*
    Write a program in C to show elements of a matrix.

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int i, j, a, b;
    int arr[6][6];
    printf("Enter row number: ");
    scanf("%d", &a);
    printf("\nEnter column number: ");
    scanf("%d", &b);
    printf("Enter your matrix:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("Your matrix is:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}