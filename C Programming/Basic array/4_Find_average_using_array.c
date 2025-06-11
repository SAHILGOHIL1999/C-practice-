#include <stdio.h>

// Find average using array.

int main()
{
    int arr[10], i, n, sum = 0, average;

    printf("Enter number of elements under 10 : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    average = sum / n;
    printf("Average = %d", average);
    return 0;
}
