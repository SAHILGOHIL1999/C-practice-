#include <stdio.h>

int main()
{
    int m1[2][2] = {
        {1, 2},
        {3, 4}};
    int m2[2][2] = {
        {5, 6},
        {7, 8}};
    int sum[2][2];

    // add corresponding elements
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            sum[i][j] = m1[i][j] + m2[i][j];

    // print result
    printf("Sum matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
