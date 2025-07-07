#include <stdio.h>

// Write a program to check whether a number is even or odd.

int main()
{
    int number;

    printf("Enter a Value =");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("%d is even number",number);
    }
    else
    {
        printf("The odd number");
    }
    return 0;
}