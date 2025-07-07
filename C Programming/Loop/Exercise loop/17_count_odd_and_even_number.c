#include <stdio.h>

// Accept 10 values and count total odd and even numbers.

int main()
{
    int i = 1, num, oddCount = 0, evenCount = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Enter a number %d = ",i);
        scanf("%d",&num);

        if(num % 2 != 0)
        {
            oddCount++;
        }

        else if(num % 2 == 0)
        {
            evenCount++;
        }
    }
    printf("Total odd number = %d\  nTotal even number = %d\n",oddCount,evenCount);
    return 0;
}