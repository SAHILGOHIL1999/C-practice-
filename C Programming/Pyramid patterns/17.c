#include <stdio.h>

// 12345
// 1234
// 123
// 12
// 1

int main()
{
    int i = 1, j = 0;

    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        printf("%d",j);
        printf("\n");
        
    }
    return 0;
}