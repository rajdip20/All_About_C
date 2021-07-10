/*
    Binary tree using linked list.

    ~~~~~~Update Date : 10/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int count = 1;

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
} node;

node *insert(node *bt, char n)
{
    if (bt == NULL)
    {
        bt = (node *)malloc(sizeof(node));
        (bt)->data = n;
        (bt)->left = NULL;
        (bt)->right = NULL;
        count++;
    }
    else
    {
        if (count % 2 == 0)
            bt->left = insert(bt->left, n);
        else
            bt->right = insert(bt->right, n);
    }
    return (bt);
}

int inorder(node *bt)
{
    if (bt != NULL)
    {
        inorder(bt->left);
        printf("%c\t", bt->data);
        inorder(bt->right);
    }
}

int preorder(node *bt)
{
    if (bt != NULL)
    {
        printf("%c\t", bt->data);
        preorder(bt->left);
        preorder(bt->right);
    }
}

int postorder(node *bt)
{
    if (bt != NULL)
    {
        postorder(bt->left);
        postorder(bt->right);
        printf("%c\t", bt->data);
    }
}

int main()
{
    int choice;
    char a;
    node *root = NULL;
    while (1)
    {
        printf("\n*********Main Menu*********\n");
        printf("\n Choose one option from the following list ...\n");
        printf("\n 1. Insert node \n 2. Pre-order traversal tree \n 3. In-order traversal tree \n 4. Post-order traversal tree \n 5. Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n Insert data in character: ");
            scanf("%s", &a);
            root = insert(root, a);
            break;
        case 2:
            printf("\n The list in preorder: ");
            preorder(root);
            break;
        case 3:
            printf("\n The list in inorder: ");
            inorder(root);
            break;
        case 4:
            printf("\n The list in postorder: ");
            postorder(root);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}