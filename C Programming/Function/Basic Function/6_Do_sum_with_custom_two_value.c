#include <stdio.h>

// Do sum with custom two values using functions.

void doSum(int, int);

int main()
{
    doSum(20, 40);
    doSum(40, 50);
    doSum(12, 12);

    return 0;
}

void doSum(int a, int b)
{
    int sum = 0;

    sum = a + b;
    printf("Sum : %d + %d = %d\n", a, b, a + b);
}