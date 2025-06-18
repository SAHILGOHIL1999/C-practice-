#include <stdio.h>

// Check if the number 25 exists in an array of 8 integers.

int main()
{
    int i, found = 0;
    int arr[8];

    printf("Enter 8 integers : ");

    for(i = 0; i < 8; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < 8; i++)
    {
        if(arr[i] == 25)
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("No: 25 is exists in the array\n");
    }
    else
    {
        printf("No: 25 is not exists in the array\n");
    }
    return 0;
}