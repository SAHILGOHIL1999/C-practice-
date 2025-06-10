#include <stdio.h>

int main()
{
    float mon, yr, wk;

    printf("Enter a Month = ");
    scanf("%f", &mon);

    yr = mon / 12;
    wk = yr * 52;

    printf("Week = %f" ,wk);

    return 0;
}