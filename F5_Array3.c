#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Data of the array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}