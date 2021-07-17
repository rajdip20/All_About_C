/*
    Write a C program to calculate Tower of Hanoi using function.

    ~~~~~~ Update Date : 17/07/2021 ~~~~~~
*/

#include<stdio.h>
void towers(int, char, char, char);

int main()
{
    int num;
    printf("Enter the number of disks: ");
    scanf("%d",&num);
    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towers(num, 'A', 'C', 'B');
}

void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from stand %c to stand %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from stand %c to stand %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
