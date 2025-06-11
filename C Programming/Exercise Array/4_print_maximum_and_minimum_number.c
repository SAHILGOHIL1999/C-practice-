#include <stdio.h>

// Write a C program to find maximum and minimum element in an array.

// Method 1 : Declaration and initialization of array

// int main()
// {
//     int i = 0;

//     int arr[5] = {20, 30, 59, 78, 98};

//     int max = arr[0];
//     int min = arr[0];

//     for (i = 0; i < 5; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         else
//         {
//             min = arr[i];
//         }
//     }
//     printf("Maximum element = %d\n", max);
//     printf("Minimum element = %d\n", min);

//     return 0;
// }

// Method 2 : Accept value from user

int main()
{
    int i = 0, n;

    printf("Enter number of elments : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements :\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element : %d\n", max);
    printf("Minimum element : %d\n", min);

    return 0;
}
