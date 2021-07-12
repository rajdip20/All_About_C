/*
    Write a program with C for Queue using Array.

    ~~~~~~ Update Date : 12/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int enqueue();
int dequeue();
int display();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main()
{
    int choice;
    while (1)
    {
        printf("\n\t1.Insert element to queue ");
        printf("\n\t2.Delete element from queue ");
        printf("\n\t3.Display all elements of queue ");
        printf("\n\t4.Quit ");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice ");
        }
    }
}
int enqueue()
{
    int item;
    if (rear == MAX - 1)
        printf("Queue Overflow ");
    else
    {
        if (front == -1)
            front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}
int dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow ");
        return 0;
    }
    else
    {
        printf("Element deleted from queue is : %d", queue_array[front]);
        front = front + 1;
    }
}
int display()
{
    int i;
    if (front == -1)
        printf("Queue is empty ");
    else
    {
        printf("Queue is : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("");
    }
}