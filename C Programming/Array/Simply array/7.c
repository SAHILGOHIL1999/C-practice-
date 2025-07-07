#include <stdio.h>

// Create an array of 4 float numbers, take input from user, and display all elements.

int main()
{
    int i = 0;
    float arr[4];

    
    for (i = 0; i < 4; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("%.2f ", arr[i]);
    }

    return 0;
}