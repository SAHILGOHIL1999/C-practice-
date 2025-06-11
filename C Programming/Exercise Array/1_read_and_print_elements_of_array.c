#include <stdio.h>

// Write a C program to read and print elements of array.

int main()
{
    int i = 0;

    int arr[5] = {15,30,36,47,52};

    for(i = 0; i < 5; i++)
        printf("%d ",arr[i]);

    return 0;
}