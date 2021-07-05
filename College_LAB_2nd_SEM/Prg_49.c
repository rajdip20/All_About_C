/*
    Write a program in C to sort an array of strings using pointers & function.

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include <stdio.h>
#include <string.h>
char func(int n, char *x[]);
int main()
{
    char *x[20];
    int i, n = 0;
    printf("Enter no. of Strings: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the Strings %d: ", i + 1);
        x[i] = (char *)malloc(20 * sizeof(char));
        scanf("%s", x[i]);
    }
    func(n, x);
    printf("\nSorted list is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d %s\n", i + 1, x[i]);
    }
}

char func(int n, char *x[])
{
    int i, j;
    char t[20];

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(x[i], x[j]) > 0)
            {
                strcpy(t, x[j]);
                strcpy(x[j], x[i]);
                strcpy(x[i], t);
            }
    return (n, x);
}