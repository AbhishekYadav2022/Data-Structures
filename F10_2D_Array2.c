// Write a C program to take 16 number in a 2-D array and print the elements that are divisible by 5
#include <stdio.h>
int main()
{
    int a[4][4];

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
    return 0;
}