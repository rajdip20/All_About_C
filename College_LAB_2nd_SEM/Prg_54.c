/*
    Write a program in C to write some numbers into a file (bcd.txt) and read from that file and sort that numbers.

    ~~~~~~ Update Date : 07/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, t, n, num[30];
    printf("Enter limits of the numbers you want to store: ");
    scanf("%d", &n);
    FILE *fp;
    fp = fopen("bcd.txt", "w");

    printf("\nEnter the numbers: \n");
    fprintf(fp, "Inputed numbers are: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        fprintf(fp, "%d ", num[i]);
    }
    fprintf(fp, "\n\n");
    fclose(fp);
    fp = fopen("bcd.txt", "r");

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                t = num[i];
                num[i] = num[j];
                num[j] = t;
            }
        }
    }
    fclose(fp);
    fp = fopen("bcd.txt", "a");
    printf("\nAfter sorting: \n");
    fprintf(fp, "Sorted output is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
        fprintf(fp, "%d ", num[i]);
    }
    fclose(fp);
}