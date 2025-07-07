#include <stdio.h>

// 1
// 10
// 101
// 1010
// 10101

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",j % 2);
        }
        printf("\n");
    }
    return 0;
}