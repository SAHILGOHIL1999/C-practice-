#include <stdio.h>

//     5
//    54
//   543
//  5432
// 54321

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for(j = 4; j >= 5 - i; j--)
        printf(" ");

        for(j = 5; j >= i; j--)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}