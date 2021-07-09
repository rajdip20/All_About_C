/*
    Sort a list of names in dictionary order.
    
    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[30][24], t[30][24], u[24];
    int i, j, n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    printf("\nEnter %d names:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        strcpy(t[i], s[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(u, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], u);
            }
        }
    }
    printf("After sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s", s[i]);
        printf("\n");
    }
}