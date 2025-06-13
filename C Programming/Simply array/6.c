#include <stdio.h>

// Write a program to read 5 integers from the user and store them in an array.

int main()
{
    int arr[5], i = 0, n;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}