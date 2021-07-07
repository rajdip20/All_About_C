/*
    Write a program in C to write a line of text into a file (xyz.txt) and read from that file to print.

    ~~~~~~ Update Date : 07/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    FILE *fp;
    int i, n;
    char s[100];
    char fname[20] = "xyz.txt";
    char s1;
    printf("Input the number of lines to be written: ");
    scanf("%d", &n);
    printf("\nThe lines are:\n");
    fp = fopen(fname, "a");
    for (i = 0; i < n + 1; i++)
    {
        fgets(s, sizeof s, stdin);
        fputs(s, fp);
    }
    fclose(fp);
    fp = fopen(fname, "r");
    printf("\nThe content of the file %s is: ", fname);
    s1 = fgetc(fp);
    while (s1 != EOF)
    {
        printf("%c", s1);
        s1 = fgetc(fp);
    }
    fclose(fp);
}