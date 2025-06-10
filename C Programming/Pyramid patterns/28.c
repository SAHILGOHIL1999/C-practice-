#include <stdio.h>

// 1
// 00
// 111
// 0000
// 11111

int main()
{
    int i = 1, j = 0;

    {
        for (j = 1; j <=  i; j++)
        {
            printf("%d",i % 2 );
        }
        printf("\n");
    }
    return 0;
}
