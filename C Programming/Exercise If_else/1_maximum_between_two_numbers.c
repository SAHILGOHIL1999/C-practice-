#include <stdio.h>

// Write a program to find maximum between two numbers.

int main()
{
    int a, b;
    printf ("Enter a value of A = ");
    scanf ("%d", &a);

    printf("Enter a value of B =");
    scanf ("%d",&b);

    if(a > b)
    {
        printf ("Maximum is %d\n",a);
    }
    else if (a < b)
    {
        printf ("Maximum is %d",b);
    }
    else
    {
        printf ("Value are equal %d");
    }
    return 0;
}
