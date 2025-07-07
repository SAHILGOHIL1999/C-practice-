#include <stdio.h>

// Find the position of the maximum and minimum element in an array.

int main()
{
    int arr[5];
    int max, min;

    printf("Enter 5 elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("The Maximum number: %d\n", max);
    printf("The Minimum number: %d", min);

    return 0;
}
