/*
    Write a program in C to generate pascal triangle using function
						1
					  1   1
				    1	2	1
			      1	  3	  3	  1
		        1	4	6	4	1
	          1	  5	  10  10  5	  1

    ~~~~~~ Update Date : 03/07/2021 ~~~~~~
*/

#include<stdio.h>
long func(int);
int main()
{
    int x, y, z;
    printf("Enter number of rows: ");
    scanf("%d", &y);
    for (x = 0; x < y; x++)
    {
        for (z = 0; z <= (y - x - 2); z++)
            printf(" ");
        for (z = 0; z <= x; z++)
            printf("%ld ", func(x) / (func(z) * func(x - z)));
        printf("\n");
    }
}

long func(int y)
{
    int z;
    long r = 1;
    for (z = 1; z <= y; z++)
        r = r * z;
    return (r);
}