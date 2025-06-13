#include <stdio.h>

// Read 10 characters from the user and store them in a character array, then print the array.

int main()
{
    char arr[10];

    printf("Enter 10 Character:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}