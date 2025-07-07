#include <stdio.h>

// Write a program to check a given value is three digit or not.

int main()
{
    int n;

    printf("Enter a  number =");
    scanf("%d",&n);

    if(n >= 100 && n <= 999)
    {
        printf("%d is three digit",n);
    }
    else
    {
        printf("%d is not three digit",n);
    }
    return 0;
}