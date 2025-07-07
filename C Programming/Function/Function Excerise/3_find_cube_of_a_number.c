#include <stdio.h>

// Write C program to find cube of a number using function.

void isCube(int);

int main()
{
    int val = 0;

    printf("Enter a value : ");
    scanf("%d",&val);

    isCube(val);

    return 0;
}

void isCube(int a)
{
    int cube = 0;

    cube = a * a * a;

    printf("%d is cube of %d",cube,a);
}