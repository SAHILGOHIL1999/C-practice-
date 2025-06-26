#include <stdio.h>

// Function to demonstrate null pointer safety
void checkNullPointer()
{
    int *ptr = NULL; // Initialize pointer to NULL

    printf("Checking if pointer is NULL:\n");

    if (ptr == NULL)
    {
        printf("Pointer is NULL - safe to check!\n");
    }
    else
    {
        printf("Pointer has a valid address: %p\n", ptr);
        printf("Value at pointer: %d\n", *ptr);
    }

    // Now assign a valid address
    int number = 42;
    ptr = &number;

    printf("\nAfter assigning address:\n");
    if (ptr != NULL)
    {
        printf("Pointer now points to: %p\n", ptr);
        printf("Value at pointer: %d\n", *ptr);
    }
}

int main()
{
    printf("=== Null Pointer Check Demo ===\n");
    checkNullPointer();
    return 0;
}