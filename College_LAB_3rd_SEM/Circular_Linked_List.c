/* 
    Circular Linked List All in one.

    ~~~~~~ Update Date : 11/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

int create(int);
int beginsert();
int lastinsert();
int begin_delete();
int last_delete();
int display();
int main()
{
    int choice, n;
    while (1)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n 1. Create node \n 2. Insert in begining \n 3. Insert at last \n 4. Delete from Beginning \n 5. Delete from last \n 6. display \n 7. Exit\n");
        printf("\nEnter your choice:\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the total number of nodes in list: ");
            scanf("%d", &n);
            create(n);
            break;
        case 2:
            beginsert();
            break;
        case 3:
            lastinsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
    return 0;
}
int create(int n)
{
    int i, data;
    struct node *prevNode, *newNode;
    if (n >= 1)
    {
        
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;
        prevNode = head;
        
        for (i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;

            prevNode = newNode;
        }

        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

int beginsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter the node data:");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
        printf("\n node inserted\n");
    }
}
int lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW\n");
    }
    else
    {
        printf("\n Enter Data?");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }

        printf("\n node inserted\n");
    }
}

int begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n node deleted\n");
    }

    else
    {
        ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\n node deleted\n");
    }
}
int last_delete()
{
    struct node *ptr, *preptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n node deleted\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("\n node deleted\n");
    }
}

int display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("\n nothing to print");
    }
    else
    {
        printf("\n printing values ... \n");

        while (ptr->next != head)
        {

            printf("%d \n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d \n", ptr->data);
    }
}