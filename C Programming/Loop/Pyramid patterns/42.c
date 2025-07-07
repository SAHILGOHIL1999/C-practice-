#include <stdio.h>

// 54321
//  5432
//   543
//    54
//     5

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = i - 1; j >= 1; j--)
            printf(" ");

        for (j = 5; j >= i; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}