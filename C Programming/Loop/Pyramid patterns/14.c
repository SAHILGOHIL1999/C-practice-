#include <stdio.h>

// 11111
// 2222
// 333
// 44
// 5

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
        printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
