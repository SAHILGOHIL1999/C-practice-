#include <stdio.h>

// Accept 10 values and count odd numbers.

int main()
{
    int i = 1, num, oddCount = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d = ", i);
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            oddCount++;
        }
    }
    printf("Total odd number =%d\n", oddCount);

    return 0;
}