#include <stdio.h>

// 56789
//  4567
//   345
//    23
//     1

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = i; j < i + i; j++)
            printf("%d", j);
            printf("\n");
    }
    return 0;
}