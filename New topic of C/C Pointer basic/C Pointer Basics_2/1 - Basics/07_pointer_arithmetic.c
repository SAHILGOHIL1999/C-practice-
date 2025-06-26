#include <stdio.h>

int main()
{
    int numbers[4] = {1, 2, 3, 4};
    int *ptr;

    ptr = numbers; // Point to first element

    printf("Using pointer arithmetic:\n");

    // Print all elements using pointer arithmetic
    printf("Element 0: %d\n", *ptr);       // *ptr gives first element
    printf("Element 1: %d\n", *(ptr + 1)); // *(ptr+1) gives second element
    printf("Element 2: %d\n", *(ptr + 2)); // *(ptr+2) gives third element
    printf("Element 3: %d\n", *(ptr + 3)); // *(ptr+3) gives fourth element

    return 0;
}