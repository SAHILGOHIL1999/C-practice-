#include <stdio.h>

// Write a C program to print all negative elements in an array.

int main()
{
    int i = 0;

    int arr[10] = {10, 20, 30, -45, -59, -62, -68, 80, 83, -94};

    for (i = 0; i < 10; i++)
    {
        if (0 > arr[i])
        {
            printf("Index no %d : %d\n", i + 1, arr[i]);
        }
    }
    return 0;
}