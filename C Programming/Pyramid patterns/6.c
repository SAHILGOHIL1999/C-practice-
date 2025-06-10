#include <stdio.h>

// 01010
// 01010
// 01010
// 01010
// 01010

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
       {
        printf("%d", j % 2 == 0);
       }
        printf("\n");
    }
    return 0;
}