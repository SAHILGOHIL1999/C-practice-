#include <stdio.h>

// 11111
// 00000
// 11111
// 00000
// 11111

int main()
{
    int i = 1, j = 0;
                  
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d",i % 2);
        }
        printf("\n");
    }
    return 0;
}