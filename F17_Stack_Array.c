#include <stdio.h>
#include <stdlib.h>

int stack[100], top, n, choice, x;
void push();
void pop();
void display();

int main()
{
    top = -1;
    printf("Enter the size of the stack[max = 100]: ");
    scanf("%d", &n);

    do
    {
    start:
        printf("\nPress 1 to push");
        printf("\nPress 2 to pop");
        printf("\nPress 3 to display");
        printf("\nPress 4 to exit");
        printf("\nEnter your choice: ");
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
            exit(1);
            break;
        default:
            printf("Wrong entry!");
            goto start;
        }
    } while (choice != 4);

    return 0;
}

// Push Function
void push()
{
    if (top >= n - 1)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the number you want to store: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

// Pop Function
void pop()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nElement %d popped", stack[top]);
        top = top - 1;
    }
}

// Display Function
void display()
{
    if (top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nElements in stack are: ");
        for (int i = top; i > -1; i--)
        {
            printf("%5d", stack[i]);
        }
    }
}