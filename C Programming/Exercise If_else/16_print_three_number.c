#include <stdio.h>

// Write a program to find maximum between three numbers.

int main()
{
    int n;

    printf("Enter a  number =");
    scanf("%d",&n);

    if(n >= 100 && n <= 999)
    {
        printf("%d is three number",n);
    }
    else
    {
        printf("Not three number");
    }
    return 0;
}