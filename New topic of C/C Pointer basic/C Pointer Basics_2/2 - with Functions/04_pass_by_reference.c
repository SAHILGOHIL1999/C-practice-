#include <stdio.h>

// Function that receives value (cannot change original)
void changeByValue(int x)
{
    x = 999;
    printf("Inside changeByValue: x = %d\n", x);
}

// Function that receives pointer (can change original)
void changeByReference(int *x)
{
    *x = 999;
    printf("Inside changeByReference: *x = %d\n", *x);
}

int main()
{
    int number = 50;

    printf("=== Pass by Value vs Reference ===\n");
    printf("Original number: %d\n", number);

    changeByValue(number);
    printf("After changeByValue: number = %d\n", number);

    changeByReference(&number); // Pass address
    printf("After changeByReference: number = %d\n", number);

    return 0;
}