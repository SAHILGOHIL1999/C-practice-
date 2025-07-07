#include <stdio.h>
//#include <stdbool.h>

// Find the position (index) of a given element in an array.

int main()
{
    int i = 0, num;
    int arr[] = {10,25,36,42,55};
//    bool found = false;

    printf("Enter a number which is you are finding : ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
            printf("The Position is %d :",num);
    }

    return 0;
}