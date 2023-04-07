#include <stdlib.h>
#include <stdio.h>
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node *getnode(int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->key = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *insertnode(struct node *root, int val)
{
    if (root == NULL)
    {
        return getnode(val);
    }
    if (root->key < val)
    {
        root->right = insertnode(root->right, val);
    }
    if (root->key > val)
    {
        root->left = insertnode(root->left, val);
    }
    return root;
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d", root->left);
    preorder(root->left);
    preorder(root->right);
}