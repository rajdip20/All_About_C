/*
    Write a C program to compute the real roots of a quadratic equation ax^2+bx+c=0.

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, r1, r2, det;
    printf("Enter the value of co-efficients: ");
    printf("\n\tEnter the value of a: ");
    scanf("%f", &a);
    printf("\n\tEnter the value of b: ");
    scanf("%f", &b);
    printf("\n\tEnter the value of c: ");
    scanf("%f", &c);
    
    det = (b * b) - (4 * a * c);
    if (det < 0)
        printf("\nImaginaty roots");
    else
    {
        if (det == 0)
        {
            r1 = -b / (2 * a);
            printf("\nSingle root is %.2f", r1);
        }
        else
        {
            r1 = (-b + sqrt(det)) / (2 * a);
            r2 = (-b - sqrt(det)) / (2 * a);
            printf("\nThe real roots are %.2f and %.2f", r1, r2);
        }
    }
}