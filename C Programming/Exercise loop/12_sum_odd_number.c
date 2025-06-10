#include <stdio.h>

// Write a program to print sum of odd and even numbers from 1 to 20.

int main()
{
    int i = 1, odd = 0, even = 0;

    while (i < 10)
    {
        if(i % 2 == 0)
        {
            even = even + i; 
        }

        else
        {
            odd = odd + i;
        }
        i++;
    }
    printf("Sum of even number %d\n Sum of odd number %d\n",even, odd);
    
    return 0;
}