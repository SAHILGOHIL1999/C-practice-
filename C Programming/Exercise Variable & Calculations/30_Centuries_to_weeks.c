#include <stdio.h>
int main()
{
    float cen, yr, wk;

    printf("Enter a Centuries = ");
    scanf("%f", &cen);

    yr = cen * 100;
    wk = yr * 52;

    printf("Weeks id %f", wk);

    return 0;
}