// Write a C program to take 10 employees' details and print that.

#include <stdio.h>
int main()
{
    int num_emps = 10;
    struct employee_details
    {
        int id;
        char name[30];
        char dept[20];
        int salary;
    } emp[num_emps];

    for (int i = 0; i < num_emps; i++)
    {
        printf("\n\nEnter details of employee no. %d", i + 1);
        printf("\nEnter the id of employee no %d: ", i + 1);
        scanf("%d", &emp[i].id);
        printf("Enter the name of employee no %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter the department of employee no %d: ", i + 1);
        scanf("%s", emp[i].dept);
        printf("Enter the salary of employee no %d: ", i + 1);
        scanf("%d", &emp[i].salary);
    }

    for (int i = 0; i < num_emps; i++)
    {
        printf("\n\nDetails of employee no. %d", i + 1);
        printf("\nId of employee no %d is %d", i + 1, emp[i].id);
        printf("\nName of employee no %d is %s", i + 1, emp[i].name);
        printf("\nDepartment of employee no %d is %s", i + 1, emp[i].dept);
        printf("\nSalary of employee no %d is %d", i + 1, emp[i].salary);
    }

    return 0;
}