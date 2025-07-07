#include <stdio.h>

// Return sum from the function.

int getAddition(int, int);

int main()
{
    int a = 30, b = 20, sum = 0;

    sum = getAddition(a, b);
    printf("Addition is %d\n",sum);

    // Direct addition of values
    printf("Addition is %d\n", getAddition(90, 90));

    return 0;
}

int getAddition(int a, int b)
{
    return  a + b;
}

