#include <stdio.h>

//     1
//    222
//   33333
//  4444444
// 555555555

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = 1; j <= i + i - 1; j++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}