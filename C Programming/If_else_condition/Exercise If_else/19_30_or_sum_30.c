#include <stdio.h>

// Write a program to check two given integers, and return true if one of them is 30 or if their sum is 30.

int main()
{
    int a, b;

    printf("Enter a value A = ");
    scanf("%d",&a);

    printf("Enter a value B = ");
    scanf("%d",&b);

    if(a == 30 || b == 30 || a+b == 30)
    {
        printf("Vaild");
    }
    else
    {
        printf("Invaild");
    }
    return 0;
}