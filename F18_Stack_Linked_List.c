#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *head;

int main()
{
    int choice = 0;
    printf("Stack operation using linked list");
    while (choice != 4)
    {
        printf("\nEnter 1 for push\nEnter 2 for pop\nEnter 3 for display\nEnter 4 to exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            break;
            printf("\nExiting...");

        default:
            printf("\nEnter a valid number");
        }
    }

    return 0;
}

// Push Opertion
void push()
{
    int num;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nCan not push");
    }
    else
    {
        printf("Enter the number you want to push: ");
        scanf("%d", &num);
        if (head == NULL)
        {
            ptr->data = num;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->data = num;
            ptr->next = head;
            head = ptr;
        }
    }
}

// Pop Operation
void pop()
{
    int num;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        num = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item %d popped", num);
    }
}

// Display Function
void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("Empty!");
    }
    else
    {
        while (ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
    }
}