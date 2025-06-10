#include <stdio.h>

// 1
// 21
// 321
// 4321
// 54321

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
