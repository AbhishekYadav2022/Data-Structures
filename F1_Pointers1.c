#include <stdio.h>

int main()
{
    int a = 10;
    char c = 'k';
    int *ptr;
    char *ch;
    ptr = &a;
    ch = &c;

    printf("Value of a = %d\n", a);
    printf("Value of c = %c\n", c);
    printf("Address of a = %u\n", &a);
    printf("Address of c = %u\n", &c);

    printf("Address of a = %u\n", ptr);
    printf("Address of c = %u\n", ch);

    printf("Value of a = %d\n", *ptr);
    printf("Value of c = %c\n", *ch);
    printf("Address of ptr = %u\n", &ptr);

    printf("Address of ch = %u\n", &ch);

    return 0;
}