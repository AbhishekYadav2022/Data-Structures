// C program to take 10 numbers in an array and delete the value at particular position 

#include <stdio.h>
int main()
{
    int a[10], i;

    // Storing 10 numbers in the array
    printf("Enter the 10 number for the array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    // Printing the data of the array
    printf("Data of the array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\nEnter the position: ");
    scanf("%d", &i);

    // Making the value 0 at that position
    a[i - 1] = 0;

    // Printing the array again
    printf("New data: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}