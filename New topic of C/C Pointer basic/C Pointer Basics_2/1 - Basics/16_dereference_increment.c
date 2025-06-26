#include <stdio.h>

int main()
{
    int arr[3] = {5, 10, 15};
    int *ptr = arr; // Point to first element

    printf("Original array: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // *ptr++ : get value, then move pointer
    printf("*ptr++ = %d\n", *ptr++);     // Prints 5, then ptr moves to next
    printf("Current *ptr = %d\n", *ptr); // Now points to 10

    // Reset pointer
    ptr = arr;

    // (*ptr)++ : increment the value pointed to
    printf("(*ptr)++ = %d\n", (*ptr)++);   // Prints 5, then increments value
    printf("Current *ptr = %d\n", *ptr);   // Now points to 6 (5+1)
    printf("arr[0] is now: %d\n", arr[0]); // First element changed

    return 0;
}