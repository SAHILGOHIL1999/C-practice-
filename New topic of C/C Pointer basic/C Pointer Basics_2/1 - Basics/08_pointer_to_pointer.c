#include <stdio.h>

int main()
{
    int value = 50;   // Regular variable
    int *ptr;         // Pointer to int
    int **ptr_to_ptr; // Pointer to pointer

    ptr = &value;      // ptr points to value
    ptr_to_ptr = &ptr; // ptr_to_ptr points to ptr

    printf("value = %d\n", value);
    printf("*ptr = %d\n", *ptr);                 // Value through ptr
    printf("**ptr_to_ptr = %d\n", **ptr_to_ptr); // Value through ptr_to_ptr

    // Change value through pointer to pointer
    **ptr_to_ptr = 100;

    printf("\nAfter change:\n");
    printf("value = %d\n", value);

    return 0;
}