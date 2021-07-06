/*
    Define a structure type callled time struct containing three members integer hour,integer minute and integer second. 
    Develop a program that will take input two times in hh:mm:ss format and display the time difference.

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include <stdio.h>

struct time
{
    int hh, mm, ss;
} t1, t2;

int main()
{
    struct time diff;
    printf("Enter start time in hh:mm:ss format: ");
    scanf("%d %d %d", &t1.hh, &t1.mm, &t1.ss);
    printf("\nEnter end time in hh:mm:ss format: ");
    scanf("%d %d %d", &t2.hh, &t2.mm, &t2.ss);

    while (t2.ss > t1.ss)
    {
        --t1.mm;
        t1.ss += 60;
    }
    diff.ss = t1.ss - t2.ss;
    while (t2.mm > t1.mm)
    {
        --t1.hh;
        t1.mm += 60;
    }
    diff.mm = t1.mm - t2.mm;
    diff.hh = t1.hh - t2.hh;
    printf("The time difference is: %d:%d:%d", diff.hh, diff.mm, diff.ss);
}