#include <stdio.h>

/* Write a program to swap the values of two numbers if the values of both variables
are not the same.*/

int main()
{
    int a, b, c;

    printf("Enter a value A = ");
    scanf("%d",&a);

    printf("Enter a value B = ");
    scanf("%d",&b);

    if(a == b)
    {
        printf("Both value are equal");
    }

    // else if(a = a + b, b = a - b, a = a - b)
    else if(c = a, a = b, b = c)
    {
        printf("Both value not Equal");
    }
    else
    {
        printf("Value is Zero");
    }
    return 0;
}