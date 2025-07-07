#include <stdio.h>

// Find the smallest number in an array of 5 integers.

int main()
{
    int arr[5];
    int num;

    printf("Enter elements : ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    int small = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < small)
            small = arr[i];
    }

    printf("The smallest number : %d",small);

    return 0;
}