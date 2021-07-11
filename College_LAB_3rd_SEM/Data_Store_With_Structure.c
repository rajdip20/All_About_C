/* 
    Program using Structure Pointer.

    ~~~~~~ Update Date : 11/07/2021 ~~~~~~
*/
#include<stdio.h>

struct emp
{
    int eid;
    char ename[15];
    int age;
}e[20];
int main()
{
    int a,i;
    printf("Enter how meny Employee's You want to store: ");
    scanf("%d",&a);
    printf("\nEnter the Employee's ID, Name, Age for e2:-\n");
    for (i = 0; i < a; i++)
    {
        printf("\n Enter the eID: ");
        scanf("%d", &e[i].eid);
        printf("\n Enter the Name: ");
        scanf("%s", &e[i].ename);
        printf("\n Enter the Age: ");
        scanf("%d", &e[i].age);
        fflush(stdin);
    }
    printf("\n *****%5s %8s %5s\t*****\n", "EID", "EName", "Age");
    for (i = 0; i < a; i++)
        printf("\n %10d %8s %5d\n", e[i].eid, e[i].ename, e[i].age);
}