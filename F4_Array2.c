// Program to take 10-10 numbers in two series and print the sum of both of the series 
#include<stdio.h>
int main(){
    int a[10], b[10], c[10], i;

    // Taking 10 numbers for first array 
    printf("Enter 10 numbers for first array: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    // Taking 10 numbers of second array
    printf("Enter 10 numbers for second array: ");
    for(i = 0; i<10; i++){
        scanf("%d", &b[i]);
    }

    // Calculating the sum of the arrays 
    for(i = 0; i< 10; i++){
        c[i] = a[i] + b[i];
    }

    // Printing the data of first array 
    printf("\nData of first array: ");
    for(i = 0; i< 10; i++){
        printf("%2d", a[i]);
    }

    // Printing the data of second array 
    printf("\nData of second array: ");
    for(i = 0; i< 10; i++){
        printf("%2d", b[i]);
    }

    // Printing the sum of first and second array 
    printf("\nSum of the arrays: ");
    for(i = 0; i< 10; i++){
        printf("%5d", c[i]);
    }

}