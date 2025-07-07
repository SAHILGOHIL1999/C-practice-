#include <stdio.h>

// Write a program to check whether a number is divisible by 5 or not.

int main()
{
    int a;

    printf("Enter a value A =");
    scanf("%d", &a);


    if(a % 5 == 0)
    {
        printf("Divisible is %d",a);
    }
   else
   {
        printf("Not Divisible");
   }
   return 0;
}