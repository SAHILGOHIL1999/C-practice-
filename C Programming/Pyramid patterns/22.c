#include <stdio.h>

// 5
// 45
// 345
// 2345
// 12345

int main()
{
    int i = 1, j = 0;

    for (i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
         printf("\n");
    }
    return 0;
}
