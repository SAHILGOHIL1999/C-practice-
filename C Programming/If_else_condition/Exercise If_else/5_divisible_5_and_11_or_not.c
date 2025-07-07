#include <stdio.h>

//  Write a program to check whether a number is divisible by 5 and 11 or not.

int main()
{
    int a, b;

    printf("Enter a value A =");
    scanf("%d", &a);

    printf("Enter a value B =");
    scanf("%d", &b);

    if (a % 5 == 0)
    {
        printf("%d Divisible by 5", a);
    }
    else if(b % 11 == 0)
    {
        printf("%d Divisible by 11", b);
    }
    else
    {
        printf("Not Divisible number");
    }
    return 0;
}