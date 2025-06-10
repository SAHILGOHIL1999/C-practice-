#include <stdio.h>

// 13579
//  3579
//   579
//    79
//     9

int main()
{
    int i, j;

    for (i = 1; i <= 9; i += 2)
    {
        for (j = 3; j <= i; j += 2)
            printf(" ");

        for (j = i; j < 10; j += 2)
            printf("%d", j);
        printf("\n");
    }
}