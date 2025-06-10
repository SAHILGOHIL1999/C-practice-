#include <stdio.h>

// Write C program to check even or odd using functions.

int checkNumber(int);

int main()
{
    int val = 0, result = 0;

    printf("Enter a value : ");
    scanf("%d",&val);

    result = checkNumber(val);

    if(result == 1)
        printf("%d is odd number",val);

    else
        printf("%d is even number",val);

    return 0;
}

int checkNumber(int val)
{
    if(val % 2 == 0)
        return 2;

    else
        return 1;
}