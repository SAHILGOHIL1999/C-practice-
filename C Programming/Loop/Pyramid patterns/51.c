#include <stdio.h>

//     *
//    ***
//   *****
//  *******
// *********

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = 1; j <= i + i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}