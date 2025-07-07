#include <stdio.h>
int main()
{
    float mil, cen, yr, wk;

    printf("Enter a Millenniums = ");
    scanf("%f", &mil);
    
    cen = mil * 10;
    yr = cen * 100;
    wk = yr * 52;

    printf("Weeks id %f", wk);

    return 0;
}