/*
    Write a program in c to calculate the area of a triangle,rectangle or a circle.
        using function depending choice entered by the user.
		1. Triangle
		2. Rectangle
		3. Circle
		4. Exit

    ~~~~~~ Update Date : 05/07/2021 ~~~~~~
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14
float tri(float);
float rect(float);
float circle(float);
int main()
{
    int ch;
    printf("1.Triangle\n2.Rectangle\n3.Circle\n4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        tri(ch);
        break;
    case 2:
        rect(ch);
        break;
    case 3:
        circle(ch);
        break;
    case 4:
        break;
    default:
        printf("\nWrong choice.");
    }
}

float tri(float ch)
{
    float a, b, c, s, area;
    printf("Enter length of 3 sides: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2f", area);
}

float rect(float ch)
{
    float a, b, area;
    printf("Enter length & width of rectangle: ");
    scanf("%f %f", &a, &b);
    area = a * b;
    printf("The area of the rectangle is: %.2f", area);
}

float circle(float ch)
{
    float r, area;
    printf("Enter radious of circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("The area of the circle is: %.2f", area);
}