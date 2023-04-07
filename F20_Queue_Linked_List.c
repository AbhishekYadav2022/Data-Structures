#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;
void insert();
void delete();
void display();

int main()
{
    int choice;
    while (choice != 4)
    {
        printf("\n**Main Menu**\n");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            break;

        default:
            printf("Invalid Input");
        }
    }
    return 0;
}

// Insert Function
void insert()
{
    int num;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        ptr->data = num;
        if (front == NULL && rear == NULL)
        {
            front = ptr;
            rear = ptr;
            // front->next = NULL; ----> No Need Of This 
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}

// Delete Function
void delete()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("Underflow");
        return;
    }
    else
    {
        ptr = front;
        front = front->next;
        free(ptr);
    }
}

// Display Function
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("Empty Queue");
    }
    else
    {
        printf("\nPrinting values .....\n");
        while (ptr != NULL)
        {
            printf("\n%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
