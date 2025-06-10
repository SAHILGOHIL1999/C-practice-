#include <stdio.h>

// Write a program to check whether an age is eligible for voting or not.

int main()
{
    int age;

    printf("Enter a age = ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("%d is eligible age for voting.", age);
    }
    else
    {
        printf("Not eligible age for voting.");
    }
    return 0;
}