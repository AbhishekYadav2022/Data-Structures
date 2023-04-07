// Write a C program to transpose the matrix of 3x3 array
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];

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

    // Transposing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    // Printing the transposed array
    printf("\nTransposed Array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}