#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void begin_insert();
void last_insert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void search();
void display();

int main()
{
    int choice;
    while (choice != 9)
    {
        printf("\n\n**Main Menu**");
        printf("\nChoose one option from the following list ...\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            last_insert();
            break;
        case 3:
            random_insert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
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

// Begin Insert Function
void begin_insert()
{
    int num;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow");
        return;
    }
    else
    {
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        ptr->data = num;
        ptr->next = head;
        head = ptr;
        printf("\nNode Inserted\n");
    }
}

// Last Insert Function
void last_insert()
{
    int num;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("Overflow");
        return;
    }
    else
    {
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        ptr->data = num;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Node Inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node Inserted");
        }
    }
}

void random_insert()
{
    int i, item, loc;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("\nEnter element value: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert: ");
        scanf("%d", &loc);
        temp = head;
        for (int i = 0; i < loc-1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\nCan not insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Node Inserted");
    }
}

void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("Empty");
        return;
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the begining ...\n");
    }
}

void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("Empty");
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}
void random_delete()
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
        for (int i = 1; i <= loc; i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\nCan't delete");
                return;
            }
        }
        ptr1->next = ptr->next;
        free(ptr);
        printf("\nDeleted node %d ", loc + 1);
    }
}

void search()
{
    int num, flag = 1, i = 1;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Empty List");
        return;
    }
    else
    {
        printf("Enter the number which you want to search: ");
        scanf("%d", &num);
        while (ptr != NULL)
        {
            if (ptr->data == num)
            {
                printf("Item found at location %d\n", i);
                flag = 0;
                break;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nPrinting the values\n");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}