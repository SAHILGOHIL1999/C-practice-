#include <stdio.h>

//     1
//    22
//   333
//  4444
// 55555

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("%d",i);
            printf("\n");
    }
    return 0;
}
