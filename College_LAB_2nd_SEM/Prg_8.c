/*
    Write a program in C to enter marks of five subjects.
    Find the sum and the average of them and then assign grade to the students according to the rule bellow.
        	AVG						    GRADE
        --------------------------------------
         >=90% to <=100%				  O
         >=80% to <=89%				      E
         >=70% to <=79%				      A
         >=60% to <=69%				      B
         >=50% to <=59%				      C
         >=40% to <=49%				      D
         <40%							  F

    ~~~~~~ Update Date : 01/07/2021 ~~~~~~
*/

#include<stdio.h>
int main()
{
    int a, b, c, d, e, s;
    float ave;
    printf("Enter marks of five subjects out of 100: ");
    printf("\n\tSubject 1: ");
    scanf("%d", &a);
    printf("\n\tSubject 2: ");
    scanf("%d", &b);
    printf("\n\tSubject 3: ");
    scanf("%d", &c);
    printf("\n\tSubject 4: ");
    scanf("%d", &d);
    printf("\n\tSubject 5: ");
    scanf("%d", &e);

    s = a + b + c + d + e;
    ave = (float)s / 5;
    printf("\nSum of marks of the five subjects is: %d", s);
    printf("\nThe average of the five subjects is: %f", ave);

    if ((ave >= 90) && (ave <= 100))
        printf("\nGrade: O");
    if ((ave >= 80) && (ave <= 89))
        printf("\nGrade: E");
    if ((ave >= 70) && (ave <= 79))
        printf("\nGrade: A");
    if ((ave >= 60) && (ave <= 69))
        printf("\nGrade: B");
    if ((ave >= 50) && (ave <= 59))
        printf("\nGrade: C");
    if ((ave >= 40) && (ave <= 49))
        printf("\nGrade: D");
    if (ave < 40)
        printf("\nGrade: FAIL");
}