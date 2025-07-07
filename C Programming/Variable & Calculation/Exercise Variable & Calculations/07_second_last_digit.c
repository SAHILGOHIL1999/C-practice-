#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a Value = ");
    scanf("%d", &a);

    b=a/10;
    printf("Last Second Digit of %d is %d", a, b%10);

    return 0;
}