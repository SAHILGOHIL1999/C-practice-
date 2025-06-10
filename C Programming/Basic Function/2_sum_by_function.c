#include <stdio.h>

// Print a sum of two values by function / method

void doSum();

int main()
{
    doSum();

    return 0;
}
void doSum()
{
    int a = 20, b = 80, sum = 0;

    sum = a + b;
    printf(" %d + %d = %d", a, b, sum);
}