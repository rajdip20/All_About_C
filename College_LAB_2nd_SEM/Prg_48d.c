/*
    Impliment string library function using pointer: strcmp()

    ~~~~~~ Update Date : 06/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char *a[20], *b[20];
    int i, j;
    printf("Enter your first word: ");
    gets(a);
    printf("\nEnter your second word: ");
    gets(b);
    i = strcmp(&a, &b);
    j = strcmp(&b, &a);
    //printf("%d",i);
    //printf("\n\n%d",j);

    if (i == j)
        printf("The two words are same.");
    else if (i > j)
    {
        printf("\nThe greater word is: %s", a);
        printf("\nThe smaller word is: %s", b);
    }
    else
    {
        printf("\nThe greater word is: %s", b);
        printf("\nThe smaller word is: %s", a);
    }
}