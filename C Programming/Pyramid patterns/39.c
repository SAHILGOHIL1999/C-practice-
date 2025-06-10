#include <stdio.h>

//     1
//    21
//   321
//  4321
// 54321

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for(j = 4; j >= i; j--)
        printf(" ");

        for(j = i; j >= 1 ; j--)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}