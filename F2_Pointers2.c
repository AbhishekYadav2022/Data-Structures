#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    int **ptr;
    p = &a;
    ptr = &p;

    printf("Value of a = %d\n", a);
    printf("Value of a = %d\n", *p);

    printf("Value of a = %d\n", **ptr);
    printf("Addrress of a = %u\n", &a);

    printf("Address of a = %u\n", p);
    printf("Address of a = %u\n", *ptr);

    printf("Address of p = %u\n", &p);
    printf("Address of p = %u\n", ptr);

    printf("Address of ptr = %u\n", &ptr);

    return 0;
}