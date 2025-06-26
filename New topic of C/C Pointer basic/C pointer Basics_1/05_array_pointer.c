#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30}; // Array with 3 elements
    int *ptr;                  // Pointer

    ptr = arr; // Point to first element (same as ptr = &arr[0])

    printf("Array elements:\n");
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);

    printf("\nUsing pointer:\n");
    printf("*ptr = %d\n", *ptr);           // First element
    printf("*(ptr+1) = %d\n", *(ptr + 1)); // Second element
    printf("*(ptr+2) = %d\n", *(ptr + 2)); // Third element

    return 0;
}