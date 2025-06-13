#include <stdio.h>

// Search for a specific number in an array of 10 integers and print "Found" or "Not Found".

int main()
{
    int arr[] = {15, 20, 25, 45, 26, 78, 36, 48, 105, 165};
    int num = 0;

    printf("Enter a number which is you are finding : ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
         if (arr[i] == num)
         {
             printf("found");
         }

         else
         {
             printf("not found");
             break;
         }
    }

    return 0;
}