/*
    Write a program in C to copy a string.
        (without using string library)
        
    ~~~~~~ Update Date : 04/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    char text1[100], text2[100], i;
    //int i;
    printf("Enter any string: ");
    fgets(text1, sizeof(text1), stdin);
    for (i = 0; text1[i] != '\0'; i++)
    {
        text2[i] = text1[i];
    }
    text2[i] = '\0';
    printf("\nFirst string: %s", text1);
    printf("\nSecond string: %s", text2);
}