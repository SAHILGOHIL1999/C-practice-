#include <stdio.h>

// Function to demonstrate pointer to pointer
void demonstrateDoublePointer()
{
    int value = 123;
    int *ptr = &value;    // Pointer to int
    int **ptr_ptr = &ptr; // Pointer to pointer

    printf("Value = %d\n", value);
    printf("Address of value = %p\n", &value);
    printf("ptr points to = %p\n", ptr);
    printf("Value through ptr = %d\n", *ptr);
    printf("ptr_ptr points to = %p\n", ptr_ptr);
    printf("Value through ptr_ptr = %d\n", **ptr_ptr);
}

int main()
{
    printf("=== Pointer to Pointer Demo ===\n");
    demonstrateDoublePointer();
    return 0;
}