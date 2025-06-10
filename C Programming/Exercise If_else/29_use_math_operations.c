#include <stdio.h>

/*Write a program to show menu to do math operations. Accept operators (+, -, /, *,
%) and two values and do operation as per user choice. */

int main ()
{
    char op, a, b;

    printf("Enter a operator = ");
    scanf("%c",&op);

    if(op == '+')
    {
        printf("a + b");
    }
    
    else if(op == '-')
    {
        printf("a - b");
    }

    else if(op == '/')
    {
        printf("a / b");
    }

    else if(op == '*')
    {
        printf("a * b");
    }

    else if(op == '%')
    {
        printf("a % b");
    }

    else
    {
        printf("Invalid operator");
    }
    return 0;
}