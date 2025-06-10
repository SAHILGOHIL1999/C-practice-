#include <stdio.h>

//     1
//    10
//   101
//  1010
// 10101

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = 1 ; j <= i; j++)
            printf("%d", j % 2);
        printf("\n");
    }
    return 0;
}