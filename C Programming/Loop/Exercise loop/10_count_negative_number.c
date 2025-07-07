#include <stdio.h>

// // Accept 10 values and count negative numbers.       negative value ketali che teni chakasani karo

int main()
{
    int i = 1, num, negativeCount = 0;

    while (i <= 10)
    {
        printf("Enter number %d = ",i);
        scanf("%d", &num);

        if (num < 0)
        {
            negativeCount++;
        }
        i++;
    }
    printf("Total negative number = %d",negativeCount);
    return 0;
}
