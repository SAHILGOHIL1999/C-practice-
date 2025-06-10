#include <stdio.h>

// 13579
// 3579
// 579
// 79
// 9

int main()
{
    int i , j;
    for (i = 0; i < 5; i++)
    {
        for (j = 2 * i + 1; j <= 9; j += 2)
        {
           printf("%d",j); 
        }
        printf("\n");
    }
    return 0;
}


// for (i = 1; i <= 9; i += 2)
// for (j = i; j < 10; j += 2)
