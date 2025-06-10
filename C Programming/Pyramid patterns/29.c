#include <stdio.h>

// 1
// 01
// 101
// 0101
// 10101

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}