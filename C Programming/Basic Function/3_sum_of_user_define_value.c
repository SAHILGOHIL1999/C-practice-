#include <stdio.h>

// Print a sum of user defined two values by function / method

void doSum();

int main()
{
    doSum();

    return 0;
}
void doSum()
{
    int a = 0, b = 0, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter a number : ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum %d + %d : %d", a, b, sum);
}