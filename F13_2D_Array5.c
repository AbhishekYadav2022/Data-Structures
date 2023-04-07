// Write a C program to take 16 elements in 2D array and print the sum of elements at diagonal
#include <stdio.h>

int main()
{
    int a[4][4], sum = 0;

    // Taking 16 numbers
    printf("Enter 16 numbers: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing the array of 16 numbers
    printf("Here is the array\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    // Finding the sum
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((i == j) || (i + j == 3))
            {
                sum = sum + a[i][j];
            }
        }
    }

    // Printing the sum
    printf("Sum = %d", sum);
    return 0;
}