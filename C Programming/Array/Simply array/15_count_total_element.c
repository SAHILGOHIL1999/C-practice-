#include <stdio.h>

// Count the total number of elements in an array of size 12.

int main()
{
    int i = 0, count;

    int arr[12] = {10, 15, 20, 56, 58, 69, 78, 84, 92, 105, 120, 130};

    for (i = 0; i < 12; i++)                                          
    {
        count++;
    }
    printf("%d", count);
}