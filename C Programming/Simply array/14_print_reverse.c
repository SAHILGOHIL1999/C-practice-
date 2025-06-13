#include <stdio.h>

// Display all elements of an array in reverse order.

int main()
{
    int i = 0;

    int arr[] = {10, 15, 30, 39, 45};

    for (i = 4; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}