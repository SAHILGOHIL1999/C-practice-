#include <stdio.h>

// Accept 10 values and print odd numbers.

int main()
{
    int i, num;

    printf("Enter a number = ");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if(num % 2 != 0)
        {
            printf("%d is odd number", num);
        }
        
        else
        {
            printf("%d is even number",num);
        }
    }

    return 0;
}
