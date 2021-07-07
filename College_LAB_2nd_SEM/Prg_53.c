/*
    reate file and count number of characters/words/lines in that file and print on the console.

    ~~~~~~ Update Date : 07/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char fname[20] = "abc.txt";
    char ch;
    int c, w, l;
    fp = fopen(fname, "r");
    c = w = l = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        c++;
        if (ch == '\n' || ch == '\0')
            l++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            w++;
    }
    if (ch > 0)
    {
        w++;
        l++;
    }
    printf("Total characters : %d\n", c - 1);
    printf("Total words      : %d\n", w+1);
    printf("Total lines      : %d\n", l+1);
    fclose(fp);
}