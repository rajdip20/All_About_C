/*
    calculate standard deviation.

    ~~~~~~ Update Date : 08/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<math.h>
#define MAX 50
int main()
{
    int i, n;
    float d[MAX], sum = 0.0, mean, SD = 0.0, Var;
    printf("How many number you want to input: ");
    scanf("%d", &n);
    printf("\nEnter %d number: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &d[i]);
        sum += d[i];
    }
    mean = sum / 10;
    for (i = 0; i < n; i++)
        Var += pow((d[i] - mean), 2);
    SD = sqrt(Var / 10);
    printf("\nStandard Deviation: %.6f", SD);
}