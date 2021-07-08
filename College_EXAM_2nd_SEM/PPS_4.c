/*
    Convert abbreviation form.

    ~~~~~~ Update Date : 08/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    char s[30], n[30];
    int i, j = 1, k, x = 0, t = 0;
    printf("Enter any name: ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        t++;
    }
    n[0] = s[0];
    for (i = 1; i < t; i++)
    {
        if (s[i] == ' ')
        {
            x = i;
            n[j] = '.';
            j++;
            n[j] = s[i + 1];
            j++;
        }
    }
    for (k = x + 2; k < t; k++)
    {
        n[j] = s[k];
        j++;
    }
    s[j] = '\0';
    printf("\nAbbreviation form is: %s", n);
}