/*
    Write a program in C to enter student details: roll, name, marks1, marks2, marks, total and sort by total.
        Also print the details of the student with highest total marks.Use structure.
    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int marks1, marks2, marks3, t;
} s[50];

int main()
{
    int i, j, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the roll no.: ");
        scanf("%d", &s[i].roll);
        printf("\nEnter name of the student: ");
        scanf("%s", s[i].name);
        printf("\nEnter mark of subject 1: ");
        scanf("%d", &s[i].marks1);
        printf("\nEnter mark of subject 2: ");
        scanf("%d", &s[i].marks2);
        printf("\nEnter mark of subject 3: ");
        scanf("%d", &s[i].marks3);
        s[i].t = s[i].marks1 + s[i].marks2 + s[i].marks3;
    }
    struct student k;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (s[j].t < s[j + 1].t)
            {
                k = s[j];
                s[j] = s[j + 1];
                s[j + 1] = k;
            }
        }
    }
    printf("\nRoll\tName\tMark 1\tMark 2\tMark 3\tTotal\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n", s[i].roll, s[i].name, s[i].marks1, s[i].marks2, s[i].marks3, s[i].t);
    }
}
