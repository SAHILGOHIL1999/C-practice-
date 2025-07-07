#include <stdio.h>

// Write a program to check a given integer and return true if it is within 10 of 100 or 200.

int main()
{
    int val;

    printf("Enter a  value = ");
    scanf("%d",&val);

    if(val >= 10 && val <=100)
    {
        printf("10 to 100");
    }
    else if(val >= 10 && val <= 200)
    {
        printf("10 to 200");
    }
    else
    {
        printf("INVAILD");
    }
    return 0;
}