#include <stdio.h>
#include <stdbool.h>

// Search for a specific number in an array of 10 integers and print "Found" or "Not Found".

int main()
{
    int arr[] = {15, 20, 25, 45, 26, 78, 36, 48, 105, 165};
    int num = 0;
    bool found = false;

    printf("Enter a number which is you are finding : ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++)
    {
         if (arr[i] == num)
         {
             found = true;
         }
    }

    if(found==true)
        printf("found");

    else
        printf("Not found");

    return 0;
}