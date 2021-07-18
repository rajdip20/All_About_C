/*
    Assignments on numerical solution of a system of linear equations using Gauss-Seidel iterations.

    ~~~~~~ Update Date : 18/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>

#define f1(x, y, z) ((20 + 3 * y - 2 * z)/8)
#define f2(x, y, z) ((33 - 4 * x + z)/11)
#define f3(x, y, z) ((9 - x - y)/4)

int main()
{
    float a = 0.0, b = 0.0, c = 0.0, x, y, z, e;
    printf("Enter tolerable error:\n");
    scanf("%f", &e);

    do
    {
        a = x;
        b = y;
        c = z;
        x = f1(a, b, c);
        y = f2(x, b, c);
        z = f3(x, y, c);
    }while((fabs(x - a)) > e && (fabs(y - b)) > e && (fabs(z - c)) > e);

    printf("\nSolution: x=%f, y=%f and z = %f\n", x, y, z);
}