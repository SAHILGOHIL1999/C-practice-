#include <stdio.h>

// *****
// ****
// ***
// **
// *

int main()
{
    int i = 1, j = 0;

    for (i = 1; i <= 5; i++)
    {
        // printf("-");
        for (j = i; j <= 5; j++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
