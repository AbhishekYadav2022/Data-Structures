#include <stdio.h>

void f2()
{
    printf("Function 2\n");
    return;
}

void f1()
{
    printf("Calling f2...\n");
    f2();
    printf("f2 called!\n");
    printf("Function 1\n");
    return;
}

// This is main function
int main()
{
    f1();
    return 0;
}

// Important Links 
// https://www.scaler.com/topics/c/c-function-call-stack/