#include <stdio.h>

/* Write a program to compute the sum of the two given integers. If the sum is in the
range 10 to 20 inclusive or not.*/

int main()
{
    int a,b;

    printf("Enter a Value A = ");
    scanf("%d",&a);

    printf("Enter a value B = ");
    scanf("%d",&b);

    if(10 <= a+b && 20>= a+b)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}