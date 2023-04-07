#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// function 1
void printRangeIterative(int start, int stop)
{
    int i;
    for (int i = start; i < stop; i++)
    {
        printf("%d\n", i);
    }
}

// function 2
void printRangeRecursive(int start, int stop)
{
    if (start < stop)
    {
        printf("%d\n", start);
        printRangeRecursive(start + 1, stop);
    }
}

// function 3
void printRangeRecursiveReversed(int start, int stop)
{
    if (start < stop)
    {
        printRangeRecursiveReversed(start + 1, stop);
        printf("%d\n", start);
    }
}

// function 4
void printRangeRecursiveSplit(int start, int stop)
{
    int mid;
    if (start < stop)
    {
        mid = (start + stop) / 2;
        printRangeRecursiveSplit(start, mid);
        printf("%d\n", mid);
        printRangeRecursiveSplit(mid + 1, stop);
    }
}

#define Noisy(x) (puts(#x), x)

int main()
{
    Noisy(printRangeIterative(0, 10));
    return 0;
}