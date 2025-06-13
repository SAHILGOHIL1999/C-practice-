#include <stdio.h>

// Input 6 numbers into an array and print each element with its index position.

int main()
{
    int i = 0;

    int arr[7] = {10, 15, 30, 39, 45, 89, 95};

    for (i = 0; i < 7; i++)
        printf("Index number %d) : %d\n", i + 1, arr[i]);

    return 0;
}