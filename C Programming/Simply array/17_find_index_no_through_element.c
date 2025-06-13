#include <stdio.h>

// Find the position (index) of a given element in an array.

int main()
{
    int i = 0, num = 0;
    int arr[] = {10,25,36,42,55};

    printf("Enter a number which is you are finding : ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == i)
            printf("%d ", arr[i]);

    }

    return 0;
}