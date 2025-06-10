# include <stdio.h>

// 55555
// 44444
// 33333
// 22222
// 11111

int main()
{
    int  i = 1, j = 0;

    for(i = 5; i >= 1; i--)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}