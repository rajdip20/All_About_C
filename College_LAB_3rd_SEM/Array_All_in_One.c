/*
    ARRAY ALL PROGRAMMS.

    ~~~~~~ Update Date : 10/07/2021 ~~~~~~
*/
#include <stdio.h>

int insert(int[], int, int, int);
int del(int[], int, int);
void srch(int[], int, int);
void sort(int[], int);
void reverse(int[], int);
void display(int[], int);

int main()
{
    int i, n, l, e, choice, a[20];
    printf("\n\tARRAY INSERT, DELETE, SEARCH, SORT, REVERSE & DISPLAY.\n");
    printf("\nEnter How Many Elements You Want: ");
    scanf("%d", &n);
    printf("\nEnter the Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n A[%d]=", i + 1);
        scanf("%d", &a[i]);
    }
    while (1)
    {
        
        printf("\n\nYour Choices for Array Operations Are:-\n ");
        printf("\n 0)Exit\n\n 1)Insert Element.\n\n 2)Delte Element.\n\n 3)Search Element.\n\n 4)Sort List\n\n 5)Reverse List.\n\n 6)Display.\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;

        case 1:
            printf("\nEnter the Location to Insert(1 to %d): ", n);
            scanf("%d", &l);
            if (l > n)
            {
                printf("\n\tPlease Check the Position!\n");
            }
            else
            {
                printf("\nEnter the Element to Insert: ");
                scanf("%d", &e);
                n = insert(a, n, l - 1, e);
                printf("\n\nELEMENTS AFTER INSERTION:\n");
                display(a, n);
            }
            break;

        case 2:
            printf("\nEnter the Location to Delete(1 to %d): ", n);
            scanf("%d", &l);
            if (l > n)
            {
                printf("\n\tPlease Check the Position!\n");
            }
            else
            {
                n = del(a, n, l - 1);
                printf("\n\nELEMENTS AFTER DELETION:\n");
                display(a, n);
            }
            break;

        case 3:
            printf("\nEnter the Element to Search: ");
            scanf("%d", &e);
            srch(a, n, e);
            break;

        case 4:
            printf("\n\nBEFORE SORTING:\n");
            display(a, n);
            sort(a, n);
            printf("\n\nAFTER SORTING:\n");
            display(a, n);
            break;

        case 5:
            printf("\n\nBEFORE REVERSE:\n");
            display(a, n);
            reverse(a, n);
            printf("\n\nAFTER REVERSE:\n");
            display(a, n);
            break;

        case 6:
            printf("\nARRAY ELEMENTS ARE:\n");
            display(a, n);
            break;
        }
    }
}

int insert(int a[], int n, int l, int e)
{
    int j;
    for (j = n - 1; j >= l; j--) //shift all elements from a[n-1] to a[l]
    {
        a[j + 1] = a[j];
    }
    a[j + 1] = e;
    return (n + 1); //number of elements will be increased by 1
}

int del(int a[], int n, int l)
{
    int j;
    for (j = l; j <= n; j++) //Left Shift : shift all elements from a[n-1] to a[p]
    {
        a[j] = a[j + 1];
    }
    return (n - 1); //number of elements will be Decreased by 1
}
void srch(int a[], int n, int e)
{
    int i, Flg = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == e)
        {
            printf("\n The Element %d is found in %dth Position.\n", e, i + 1);
            Flg = 1;
        }
    }
    if (Flg == 0)
        printf("\n The Element %d is Not Present in the Array!", e);
}

void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

void reverse(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n  A[%d]=%d\n", i + 1, a[i]);
    }
}