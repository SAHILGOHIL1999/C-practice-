#include <stdio.h>

// Accept 10 values and count total positive, negative and zero values.

int main()
{
    int i = 0, val, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a value %d = ", i);
        scanf("%d", &val);
        
            if(val == 0)
            {
                zeroCount++; 
            }

            else if (0 < val)
            {
                positiveCount++;
            }

            else
            {
                negativeCount++;         
        }
    }
    printf("Count of total zero number = %d\n",zeroCount);
    printf("Count of total positive number = %d\n",positiveCount);
    printf("Count of total negative number = %d",negativeCount);

    return 0;
}