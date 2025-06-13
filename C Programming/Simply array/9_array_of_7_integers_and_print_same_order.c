#include <stdio.h>

// Take input for an array of 7 integers and display them in the same order.

int main()
{
    int i = 0;

    int arr[7] = {10, 15, 30, 39, 45, 89, 95};

    for (i = 0; i < 7; i++)
        printf("%d ", arr[i]);

    return 0;
}