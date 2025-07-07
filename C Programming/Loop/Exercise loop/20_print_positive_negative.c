#include <stdio.h>

// Accept 10 values and print sum of positive and negative values.

int main()
{
    int i = 0, val, positive = 0, negative = 0;
    
    for(i = 0; i < 10; i++)
    {
        printf("Enter a value = ");
        scanf("%d",&val);

        if(0 < val)
        {
            positive += val; 
        }

        else
        {
            negative += val;
        }
    }
    printf("Total positive number = %d\n",positive);
    printf("Total negative number = %d",negative);

    return 0;
}