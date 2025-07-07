#include <stdio.h>

// Accept value from user

int main()
{
    int i = 0;
    int arr[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter a value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    //        printf("%d ",i);

    return 0;
}
// hello git