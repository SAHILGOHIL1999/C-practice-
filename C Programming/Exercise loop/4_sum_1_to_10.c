#include <stdio.h>

// Write a program to print sum of 1 to 10.

int main()
{
    int i = 1, sum = 0;

    while(i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d\n",sum);
    
    return 0;
}