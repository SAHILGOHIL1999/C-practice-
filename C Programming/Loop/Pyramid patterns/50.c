#include <stdio.h>

// 555555555
//  4444444
//   33333
//    222
//     1

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = 1; j <= i + i - 1; j++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}