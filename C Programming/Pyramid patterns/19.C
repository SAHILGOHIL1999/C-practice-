#include <stdio.h>

// 54321
// 4321
// 321
// 21
// 1

int main()
{
    int i = 1, j = 0;

     for (i = 5; i >= 1; i--) 
    {
       for (j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}