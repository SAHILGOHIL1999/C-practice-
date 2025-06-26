#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr[1]; // Points to second element
    int *ptr2 = &arr[3]; // Points to fourth element
    int *ptr3 = &arr[1]; // Points to same as ptr1

    printf("ptr1 points to: %d\n", *ptr1);
    printf("ptr2 points to: %d\n", *ptr2);
    printf("ptr3 points to: %d\n", *ptr3);

    // Compare pointers
    if (ptr1 == ptr3)
    {
        printf("ptr1 and ptr3 point to same location\n");
    }

    if (ptr1 < ptr2)
    {
        printf("ptr1 points to earlier element than ptr2\n");
    }

    // Pointer difference
    printf("Difference between ptr2 and ptr1: %ld\n", ptr2 - ptr1);

    return 0;
}