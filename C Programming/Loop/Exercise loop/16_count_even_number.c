#include <stdio.h>

// Accept 10 values and count even numbers.

int main()
{
    int i = 1, num, evenCount = 0;


    for(i = 0; i < 10; i++)
    {
        printf("Enter a number %d= ",i);
        scanf("%d",&num);

        if(num % 2 == 0)
        {
            evenCount++;
        }
    }
    printf("Total even numbe = %d\n",evenCount);

    return 0;
}