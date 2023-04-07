#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head;

void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node of given location\n7.Search\n8.Show\n9.Exit\n");
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
            insertion_specified();
            break;
        case 4:
            deletion_beginning();
            break;
        case 5:
            deletion_last();
            break;
        case 6:
            deletion_specified();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
    return 0;
}

void insertion_beginning()
{
    int num;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Can not insert");
    }
    else
    {
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        ptr->data = num;
        if (head == NULL)
        {
            ptr->prev = NULL;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->next = head;
            ptr->prev = NULL;
            head = ptr;
        }
        printf("\nNode Inserted\n");
    }
}
void insertion_last()
{
    int num;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *ptr2;
    if (ptr == NULL)
    {
        printf("Can not insert");
    }
    else
    {
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        ptr->data = num;
        ptr2 = head;
        while (ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
        }
        ptr->next = NULL;
        ptr->prev = ptr2;
        ptr2->next = ptr;
        printf("\nNode Inserted\n");
    }
}
void insertion_specified()
{
    struct node *ptr, *temp;
    int item, loc, i;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOverlflow\n");
    }
    else
    {
        temp = head;
        printf("Enter the location: ");
        scanf("%d", &loc);
        for (int i = 0; i < loc - 2; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\n There are less than %d elements", loc);
                return;
            }
        }
        printf("Enter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev = temp;
        temp->next = ptr;
        temp->next->prev = ptr;
        printf("\nnode inserted\n");
    }
}
void deletion_beginning()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (head->next == NULL)
    {
        free(head);
        printf("\nOnly node deleted\n");
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        printf("\nNode deleted\n");
    }
}
void deletion_last()
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
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        printf("\nnode deleted\n");
    }
}
void deletion_specified()
{
    int loc;
    struct node *ptr1;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Empty List");
        return;
    }
    else
    {
        printf("Enter the location: ");
        scanf("%d", &loc);
        ptr = head;
        for (int i = 0; i < loc - 1; i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = ptr->next;
        ptr->next->prev = ptr1;
        printf("\nNode Deleted\n");
    }
}
void display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("Empty List");
    }
    else
    {
        printf("\nPrinting Values...\n");
        while (ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
void search()
{
    int val, flag = 1, i = 0;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("Enter the item you want to search: ");
        scanf("%d", &val);
        while (ptr != NULL)
        {
            if (ptr->data == val)
            {
                printf("Item found at position %d", i + 1);
                flag = 0;
                break;
            }
            ptr = ptr->next;
            i++;
        }
        if (flag == 1)
        {
            printf("Item not found");
        }
    }
}