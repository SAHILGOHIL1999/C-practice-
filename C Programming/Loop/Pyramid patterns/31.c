#include <stdio.h>

//     *
//    **
//   ***
//  ****
// *****

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");
            printf("\n");
    }
    return 0;
}
