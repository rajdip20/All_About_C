/*
    CIRCULAR QUEUE USING ARRAY.

    ~~~~~~ Update Date : 11/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int data[MAX];
int front = -1, rear = -1;

int enqueue();
int display();
int dequeue();

int main()
{
    int op;
    while (1)
    {
        printf("\n\n\t\t-------** Circular Queue **-------\n");
        printf("\n\nHere is Your Choices for QUEUE Operation:-\n");
        printf("\n\n\t(1) ENQUEUE.\n\n\t(2) DEQUEUE.\n\n\t(3) EXIT.\n");
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            enqueue();
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            return 0;
        default:
            printf("\n\n\tWRONG CHOICE!\n\n");
        }
    }
}

int enqueue()
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("\n\n\tCIRCULAR QUEUE FULL!\n");
        return 0;
    }

    if (front == -1)
        front = rear = 0;

    else
    {
        if (rear == MAX - 1)

            rear = 0;

        else

            rear = rear + 1;
    }
    printf("\n\n\tEnter Data: ");
    scanf("%d", &data[rear]);
}

int dequeue()
{
    if (front == -1)
    {
        printf("\n\n\tCIRCULAR QUEUE IS EMPTY!\n");
        return 0;
    }
    printf("\n\n\tElement %d is Deleted from Circular Queue.\n", data[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1 && rear != 0)
            front = 0;
        else
            front = front + 1;
    }
}

int display()
{
    int p;
    if (front < 0)
    {
        printf("\n\nThe QUEUE is: \n");
        printf("\n\t------------------------\n\t");
        printf(" Front--> EMPTY <--Rear");
        printf("\n\t________________________\n");
        return 0;
    }
    printf("\n\nCirlular Queue is....\n\n");
    if (front <= rear)
    {
        printf("\n\t------------------------\n");
        for (p = front; p <= rear; p++)
        {
            if (p == front)
                printf("Front--> ");
            printf("%d | ", data[p]);
            if (p == rear)
                printf("\b\b<--Rear");
        }
        printf("\n\n\t------------------------");
    }
    else
    {
        printf("\n---------------------------------------------\n");
        for (p = 0; p <= rear; p++)
        {
            if (p == rear)
                printf("Rear-->");
            printf(" %d | ", data[p]);
        }
        for (p = front; p < MAX; p++)
        {
            if (p == front)
                printf("Front--> ");
            printf("%d | ", data[p]);
        }
        printf("\n\n---------------------------------------------");
    }
}