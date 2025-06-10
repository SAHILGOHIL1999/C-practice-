#include <stdio.h>

// Check positive or negative using functions.

int isPositive(int);

int main()
{
    int result = 0;

    result = isPositive(10);

    if(result == 1)
        printf("Value is Positive");

    else if(result == 0)
        printf("Value is negative");

    else
        printf("Value is zero");

    return 0;
}

int isPositive(int val)
{
    if(val > 0)
        return  1;

    else if(val < 0)
        return 0;

    else
        return 2;
}