#include <stdio.h>

// Print all elements of an array of 5 integers using a for loop.

int main()
{
    int i = 0;

    int arr[] = {10, 15, 30, 39, 45};

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}