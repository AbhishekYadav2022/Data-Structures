// Write a C program to take 9 elements in 2D array and print the sum of total elements
#include <stdio.h>

int main()
{
    int a[3][3], sum = 0;

    // Taking 9 numbers
    printf("Enter 9 numbers: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing the array of 9 numbers
    printf("Here is the array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    // Finding the sum
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }

    // Printing the sum
    printf("Sum = %d", sum);
    return 0;
}