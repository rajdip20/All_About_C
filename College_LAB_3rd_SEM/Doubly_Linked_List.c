/* 
    Doubly Linked List All in one.

    ~~~~~~ Update Date : 11/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
int insertion_beginning();
int insertion_last();
int deletion_beginning();
int deletion_last();
int display();
int insertAfter();
int main()
{
    int choice;
    while (1)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n 1. Insert in begining\n 2. Insert at last\n 3. Delete from Beginning\n 4. Delete from last\n 5. Display \n 6. Insert after. \n 7. Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            insertion_beginning();
            break;
        case 2:
            insertion_last();
            break;
        case 3:
            deletion_beginning();
            break;
        case 4:
            deletion_last();
            break;
        case 5:
            display();
            break;
        case 6:
            insertAfter();
            break;
        case 7:
            return 0;
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}
int insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\nEnter Item value: ");
        scanf("%d", &item);

        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
        printf("\n Node inserted\n");
    }
}
int insertion_last()
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
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
    printf("\n node inserted\n");
}

int insertAfter()
{
    struct node *newNode, *temp1, *temp2;
    int value, n;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter value: ");
        scanf("%d", &value);
        printf("Enter the element after which you want to insert: ");
        scanf("%d", &n);
        newNode->data = value;
        if (head == NULL)
        {
            newNode->prev = newNode->next = NULL;
            head = newNode;
        }
        else
        {
            temp1 = head;
            while (temp1->data != n)
            {
                if (temp1->next == NULL)
                {
                    printf("Given node is not found in the list!!!");
                }
                else
                {
                    temp1 = temp1->next;
                }
            }
            temp2 = temp1->next;
            temp1->next = newNode;
            newNode->prev = temp1;
            newNode->next = temp2;
            temp2->prev = newNode;
        }
    }
    printf("\nInsertion success!!!");
}
int deletion_beginning()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        printf("\n node deleted\n");
    }
}
int deletion_last()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");
    }
    else
    {
        ptr = head;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        printf("\nNode deleted\n");
    }
}

int display()
{
    struct node *ptr;
    printf("\n Printing values...\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}