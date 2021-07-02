/*
    Write a program in C to generate the following patterns up to Specified number of Rows.
	    *	*	*	*
		  *	  *	  *
			*   *
			  *

    ~~~~~~ Update Date : 02/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter row number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf(" ");
        for (j = 0; j <= n - i; j++)
            printf("* ");
        printf("\n");
    }
}