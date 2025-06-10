#include <stdio.h>

// Write a program to check whether a number is negative and positive or zero.
int main()
{
    int num1, num2;
    printf("Enter a Value A=");
    scanf("%d", &num1);

    printf("Enter a value B= ");
    scanf("%d", &num2);


    if(num1 < num2)
    {
        printf("Positive number is %d",num1);
    }     
    else if(num1 > num2)
    {
        printf("Negative number is %d",num2);
    }
    else
    {
        printf("Value is zero %d");
    }
    return 0;
}
