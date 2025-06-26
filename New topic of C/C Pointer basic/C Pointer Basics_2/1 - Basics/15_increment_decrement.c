#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr; // Point to first element

    printf("Original array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Using ptr++:\n");
    printf("*ptr = %d, ", *ptr); // 10
    ptr++;                       // Move to next element
    printf("*ptr = %d, ", *ptr); // 20
    ptr++;
    printf("*ptr = %d\n", *ptr); // 30

    // Reset pointer
    ptr = arr;
    printf("\nUsing ++ptr:\n");
    printf("*ptr = %d, ", *ptr); // 10
    ++ptr;                       // Move to next element first
    printf("*ptr = %d\n", *ptr); // 20

    return 0;
}