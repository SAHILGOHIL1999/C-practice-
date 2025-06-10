#include <stdio.h>

// 11111
//  2222
//   333
//    44
//     5

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 2; j <= i; j++)
        printf(" ");

        for(j = i; j <= 5; j++)
        printf("%d",i);
        printf("\n");
    }
    return 0;
}
