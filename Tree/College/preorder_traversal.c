#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// Traversal Function
void preorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d ->", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Creating a New Node
struct node *createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert on the left of the node
struct node *insertLeft(struct node *root, int value)
{
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct node *insertRight(struct node *root, int value)
{
    root->right = createNode(value);
    return root->right;
}

// Function to Insert Node
struct node *insertNode(struct node *root, int value)
{
    if (root == NULL)
    {
        createNode(value);
    }
    else if (root->item < value)
    {
        insertRight(root, value);
    }
    else if (root->item > value)
    {
        insertLeft(root, value);
    }
}

void main()
{
    struct node *root = NULL;
    int data;
    char ch = 'y';
    do
    {
        printf("\n Select one from given options\n");
        printf("\nPress 1 to insert newnode");
        printf("\nPress 2 to display by preorder\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nEnter the value to inserted\n");
            scanf("%d", &data);
            root = insertNode(root, data);
            printf("\nNode inserted\n");
            break;
        }
        case 2:
        {
            printf("\nPreorder traversal the tree\n");
            preorderTraversal(root);
            break;
        }

        default:
            printf("\nWrong Entry!");
        }
        printf("\nDo you want to continue...Y/N\n");
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
}