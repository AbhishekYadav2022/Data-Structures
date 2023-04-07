#include <stdio.h>
#include "utils.h"
void main()
{
    struct node *root = NULL;
    int data;
    char ch;
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
            root = insertnode(root, data);
            printf("\nNode inserted\n");
            break;
        }
        case 2:
        {
            printf("\nPreorder traversal the tree\n");
            preorder(root);
            break;
        }

        default:
            printf("\nWrong Entry!");
        }
        printf("\nDo you want to continue...Y/N\n");
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
}