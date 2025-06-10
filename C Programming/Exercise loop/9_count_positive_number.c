#include <stdio.h>

// // Accept 10 values and count positive numbers.       positive value ketali che teni chakasani karo

int main()
{
    int i = 1, num, positiveCount = 0;

    while (i <= 10)
    {
        printf("Enter number %d = ",i);
        scanf("%d", &num);

        if (num > 0)
        {
            positiveCount++;
        }
        i++;
    }
    printf("Total positive number = %d",positiveCount);
    return 0;
}
