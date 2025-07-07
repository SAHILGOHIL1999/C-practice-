#include <stdio.h>

// Write a program to accept 10 values and print its sum.

int main()
{
    int i = 1, val = 0, sum = 0;

    // While loop

    // while(i <= 10)
    // {
    //     printf("Enter value no %d = ",i);
    //     scanf("%d",&val);

    //     sum = sum + val;
    //     i++;
    // }

    // For loop
    for (i = 1; i <= 10; i++)
    {
        printf("Enter value no %d = ", i);
        scanf("%d", &val);

        sum = sum + val;
    }

    printf("Sum is %d\n", sum);

    return 0;
}
