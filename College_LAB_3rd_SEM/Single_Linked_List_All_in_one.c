/* 
    Single Linked List Creation and Display Using START NODE only.

    ~~~~~~ Update Date : 13/07/2021 ~~~~~~
*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int c = 1;
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
int create();
int append();
int display();
int insert_b4();
int insert_aftr();
int del();
int search();
int modify();
int sort();
int reverse();
int max_min();

int main()
{
    int choice;
    while (1)
    {
        printf("\n Your Choices for Single Link List are:-");
        printf("\n\t 0) EXIT.\n\t 1) CREATE.\n\t 2) APPEND.\n\t 3) DISPLAY.");
        printf("\n\t 4) INSERT Before \n\t 5) INSERT AFTR \n\t 6) DELETE \n\t 7) SEARCH \n\t 8) MODIFY");
        printf("\n\t 9) SORT \n\t 10) REVERSE \n\t 11) FIND MAX & MIN");
        printf("\n Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            create();
            break;
        case 2:
            append();
            break;
        case 3:
            display();
            break;
        case 4:
            insert_b4();
            break;
        case 5:
            insert_aftr();
            break;
        case 6:
            del();
            break;
        case 7:
            search();
            break;
        case 8:
            modify();
            break;
        case 9:
            printf("\n\n\t\t-: BEFORE SORTING :-");
            display();
            sort();
            break;
        case 10:
            printf("\n\n\t\t-: BEFORE REVERSE :-");
            display();
            reverse();
            break;
        case 11:
            max_min();
            break;
        default:
            printf("\n\n\tWRONG CHOICE!!! ");
            
        }
    }
}

int create()
{
    struct node *temp;

    temp = malloc(sizeof(struct node));

    if (start == NULL)
    {
        printf("\n Enter the Element of Node %d: ", c++);
        scanf("%d", &temp->data);
        temp->next = NULL;
        start = temp;
    }

    else
    {
        printf("\n\n\tUse APPEND Function to Append More Nodes!\n");
        
        return 0;
    }
}

int append()
{
    struct node *temp, *p;

    temp = malloc(sizeof(struct node));

    if (start == NULL)
    {
        printf("\n\n\tUse CREATE Function to Create the 1st Node!\n");
        
        return 0;
    }
    else
    {
        /*
	    p=start;
	    while(p->next!=NULL)
	    {
	      p=p->next;
	    }
	    */
        for (p = start; p->next != NULL; p = p->next)
            ;
        printf("\n Enter the Element of Node %d: ", c++);
        scanf("%d", &temp->data);
        temp->next = NULL;
        p->next = temp;
    }
}

int display()
{
    struct node *p, *q;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    p = start;
    printf("\n\n\tTotal %d Elements Present in the Linklist.", c - 1);
    printf("\n\nThe Elements in Linklist are: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
}

int insert_b4()
{
    struct node *temp, *q;
    int n;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    printf("\nEnter the Element Before which You want to Insert: ");
    scanf("%d", &n);
    if (start->data == n)
    {
        temp = malloc(sizeof(struct node));
        printf("\n Enter the Element to binary Inserted: ");
        scanf("%d", &temp->data);
        temp->next = NULL;
        c++;
        temp->next = start;
        start = temp;
        return 0;
    }
    q = start;
    while (q != NULL)
    {
        if (q->next->data == n)
        {
            temp = malloc(sizeof(struct node));
            printf("\n Enter the Element to binary Inserted: ");
            scanf("%d", &temp->data);
            temp->next = NULL;
            c++;
            temp->next = q->next;
            q->next = temp;
            return 0;
        }
        q = q->next;
    }
    printf("\n\t ELEMENT NOT PRESENT!!!");
    
}

int insert_aftr()
{
    struct node *p, *temp;
    int n;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    printf("\nEnter the Element After which You want to Insert: ");
    scanf("%d", &n);
    p = start;
    while (p != NULL)
    {
        if (p->data == n)
        {
            temp = malloc(sizeof(struct node));
            printf("\n Enter the Element to binary Inserted: ");
            scanf("%d", &temp->data);
            temp->next = NULL;
            c++;
            temp->next = p->next;
            p->next = temp;
            return 0;
        }
        p = p->next;
    }
    printf("\n\n\tELEMENT NOT PRESENT!!!");
    
}

int del()
{
    struct node *p;
    int n;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    printf("\nEnter the Element which You want to Delete: ");
    scanf("%d", &n);
    if (start->data == n)
    {
        start = start->next;
        c--;
        return 0;
    }
    p = start;
    while (p != NULL)
    {
        if (p->next->data == n)
        {
            p->next = p->next->next;
            c--;
            return 0;
        }
        p = p->next;
    }
    printf("\n\n\tELEMENT NOT PRESENT!!!");
    
}

int search()
{
    struct node *p;
    int n, C = 0;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    printf("\nEnter the Element which You want to Search: ");
    scanf("%d", &n);
    p = start;
    while (p != NULL)
    {
        C++;
        if (p->data == n)
        {
            printf("\n The Element %d is on the %d Position in the Linklist.\n", n, C);
            
            return 0;
        }
        p = p->next;
    }
    printf("\n\n\tELEMENT NOT PRESENT!!!");
    
}

int modify()
{
    struct node *p;
    int n;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    printf("\nEnter the Element which You want to Modify: ");
    scanf("%d", &n);
    p = start;
    while (p != NULL)
    {
        if (p->data == n)
        {
            printf("\nEnter the New Value of Node: ");
            scanf("%d", &p->data);
            return 0;
        }
        p = p->next;
    }
    printf("\n\n\tELEMENT NOT PRESENT!!!");
    
}

int sort()
{
    struct node *p, *q, *r;
    int temp;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    for (p = start; p != NULL; p = p->next)
    {
        for (q = p->next; q != NULL; q = q->next)
        {
            if (p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
    printf("\n\n\n\t\t-: AFTER SORTING :-");
    display();
}

int reverse()
{
    struct node *s, *r, *q;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    r = NULL;
    for (q = start; q != NULL;)
    {
        s = r;
        r = q;
        q = q->next;
        r->next = s;
    }
    start = r;
    printf("\n\n\n\t\t-: AFTER REVERSE :-");
    display();
}

int max_min()
{
    struct node *p;
    int max, min;
    if (start == NULL)
    {
        printf("\n\n\tLINKLIST IS EMPTY!!! ");
        
        return 0;
    }
    p = start;
    max = min = p->data;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        if (p->data < min)
        {
            min = p->data;
        }

        p = p->next;
    }
    printf("\n\n   %d is the Maximum Number and %d is the Minimum Number in the Linklist.", max, min);
    
}