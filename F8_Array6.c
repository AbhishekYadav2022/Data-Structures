// A C program to sort an array
#include <stdio.h>
int main()
{
    int a[100], n, j, temp, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking the numbers
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Printing the array
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }

    // Sorting
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                temp = a[min];
                a[min] = a[j];
                a[j] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}