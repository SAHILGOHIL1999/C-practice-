#include <stdio.h>

// Write a C program to find sum of all array elements.

int main()
{
    int i = 0, sum = 0;

    int arr[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }
    printf("Sum of elements : %d", sum);

    return 0;
}