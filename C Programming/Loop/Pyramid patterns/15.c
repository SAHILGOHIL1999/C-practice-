#include <stdio.h>

// 5
// 44
// 333
// 2222
// 11111

int main()
{
    int i = 1, j = 0;

    for (i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5 ; j++)
        {
            printf("%d",i);
        }
         printf("\n");
    }
    return 0;
}
