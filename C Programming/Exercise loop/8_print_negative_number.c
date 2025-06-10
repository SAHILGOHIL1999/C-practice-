#include <stdio.h>

// Accept 10 values and print negative numbers.

int main()
{
    int i = 0, num;

    while (i < 10)
    {
        printf("Enter a number = ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Negative number is %d\n", num);
        }
        i++;
    }
    return 0;
}