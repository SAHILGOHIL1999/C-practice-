#include <stdio.h>
int main()
{
    float wk, yr, dec;

    printf("Enter Weeks : ");
    scanf("%f", &wk);

    yr = wk / 52;
    dec = yr / 10;

    printf("Decades : %f", dec);
    return 0;
}