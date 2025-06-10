#include <stdio.h>

// Write a program to accept 10 values and print its average.

int main()
{
    int i = 1, avg, val = 0, sum = 0;

    while (i <= 10)
    {
        printf("Enter a value = ");
        scanf("%d", &val);

        sum = sum + i;
        avg = sum / val;
        i++;
    }
    printf("Sum is %d\n",sum);
    printf("Average is %d",avg);
    
    return 0;
}