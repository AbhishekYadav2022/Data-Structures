// C program to take 10 numbers in an array and delete the particular value 
#include<stdio.h>
int main(){
    int a[10], i, num;

    // Storing 10 numbers in the array
    printf("Enter the 10 number for the array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    // Printing the data of the array
    printf("\nData of the array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\nEnter the number you want to delete: ");
    scanf("%d", &num);

    // Deleting the values
    for (i = 0; i < 10; i++)
    {
        if (a[i] == num)
        {
            a[i] = 0;
        }
        
    }
    
    // Printing the new array 
    printf("\nHere is the data of the new array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }
    

    return 0;
}