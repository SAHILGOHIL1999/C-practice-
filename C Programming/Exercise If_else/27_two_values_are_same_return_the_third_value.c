#include <stdio.h>

/*Write a program to compute the sum of three given integers. If the two values are
same return the third value.*/

int main()
{
    int a, b, c, sum;
    
    printf("Enter a value = ");
    scanf("%d",&a);

    printf("Enter a value = ");
    scanf("%d",&b);

    printf("Enter a value = ");
    scanf("%d",&c);


    if(a == b || b == c || a == c)
    {
        printf("Third Value");
    }
    else
    {
        sum = a + b + c;
        printf("Sum = %d",sum);
    }
    return 0;
}