#include <stdio.h>

// Write a program to check whether a given positive number is a multiple of 3 or a multiple of 7.

int main()
{
    int a;

    printf("Enter a  value = ");
    scanf("%d",&a);

    if(a % 3 == 0 || a % 7 == 0)
    {
        printf("Multiple 3 or 7");
    }
    else
    {
        printf("Not multiple 3 or 7");
    }
    return 0;
}