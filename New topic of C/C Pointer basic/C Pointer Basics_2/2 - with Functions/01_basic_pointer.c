#include <stdio.h>

// Function to demonstrate basic pointer usage
void demonstrateBasicPointer()
{
    int number = 42; // Regular integer variable
    int *ptr;        // Pointer declaration (can store address of int)

    ptr = &number; // Store address of 'number' in pointer 'ptr'

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr); // Dereferencing
}

int main()
{
    printf("=== Basic Pointer Demo ===\n");
    demonstrateBasicPointer();
    return 0;
}