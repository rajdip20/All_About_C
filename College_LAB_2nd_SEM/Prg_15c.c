/*
    Write a program in C to generate the following patterns up to Specified number of Rows.
  		    1
	      2	  2
        3	3	3
      4	  4	  4	  4

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, j, a = 1;
    printf("Enter row number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf(" %d", a);
        printf("\n");
        a++;
    }
}