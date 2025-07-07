#include <stdio.h>

// Accept 10 values and print sum of odd and even numbers.

int main()
{
    int i = 0, num, totalOdd = 0, totalEven = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number = ");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            totalOdd += num;
        }

        // else if (num % 2 == 0)
        // {
        //     totalEven += num;
        // }

         else 
        {
            totalEven += num;
        }
         
    }

    printf("Total sum of odd numbers: %d\n", totalOdd);
    printf("Total sum of even numbers: %d\n", totalEven);

    return 0;
}