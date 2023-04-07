#include<stdio.h>

int main(){
    int a[10], i;
    printf("Enter 10 numbers: ");

    // Taking the numbers 
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Here is your array: ");

    // Printing the numbers 
    for (i = 0; i < 10; i++)
    {
        printf("%2d", a[i]);
    }
    
    return 0;
}