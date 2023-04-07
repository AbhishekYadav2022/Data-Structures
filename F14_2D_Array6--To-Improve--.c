#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], i, j, k;

    // Taking 9 numbers for the first matrix
    printf("Enter 9 numbers for the first matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Taking 9 numbers for the second matrix
    printf("Enter 9 numbers for the second matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculating the multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }

    // Printing first matrix
    printf("First Matrix:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // Printing second matrix
    printf("Second Matrix:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    // Printing the multiplication
    printf("Multiplication:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 1 1 2 2 3 3 4 4 5
// 1 1 1 1 1 1 1 1 1