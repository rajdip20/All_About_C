/*
    Write a program for Quick sort.

    ~~~~~~ Update Date : 13/07/2021 ~~~~~~
*/

#include<stdio.h>
int swap_elements(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int partition_function(int arr[], int l, int h)
{
    int p = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap_elements(&arr[i], &arr[j]);
        }
    }
    swap_elements(&arr[i + 1], &arr[h]);
    return (i + 1);
}

int quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p_index = partition_function(arr, l, h);
        quick_sort(arr, l, p_index - 1);
        quick_sort(arr, p_index + 1, h);
    }
}

int print_Array(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int array[] = {14, 17, 8, 90, 11, 2, 50};
    int length = sizeof(array) / sizeof(array[0]);
    printf("Before Sorting the array: ");
    print_Array(array, length);
    printf("\n");
    printf("After Sorting the array: ");
    quick_sort(array, 0, length - 1);
    print_Array(array, length);
    return 0;
}