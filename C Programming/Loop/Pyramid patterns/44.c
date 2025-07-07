#include <stdio.h>

// 12345
//  2345
//   345
//    45
//     5

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
            printf(" ");

        for (j = i; j <= 5; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}