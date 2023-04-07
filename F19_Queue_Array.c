#include <stdio.h>
#include <stdlib.h>
#define maxsize 5

void insert();
void delete();
void display();
int queue[maxsize];
int front = -1, rear = -1;

int main()
{
    int choice;
    while (choice != 4)
    {
        printf("**Main Menu**\n");
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
            // exit(0);
            break;

        default:
            printf("Invalid Input");
        }
    }
}

// Insert Function
void insert()
{
    int num;
    printf("\nEnter the number which you want to insert: ");
    scanf("%d", &num);

    if (rear == maxsize - 1)
    {
        printf("\nOverflow");
        return;
    }

    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }

    queue[rear] = num;
    printf("\nValue Inserted\n");
}

// Delete Function
void delete()
{
    if (front == -1)
    {
        printf("\nUnderflow\n");
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
    printf("Value Deleted");
}

// Display Function
void display()
{
    int i;
    if (rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nPrinting values .....\n");
        for (i = front; i <= rear; i++)
        {
            printf(" %d ", queue[i]);
        }
    }
}