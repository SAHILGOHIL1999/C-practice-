#include <stdio.h>
int main()
{
    float min, hr, dy, yr, cen;
    printf("Enter a Minutes = ");
    scanf("%f", &min);
    hr = min / 60;
    dy = hr / 24;
    yr = dy / 365;
    cen = yr / 100;
    printf("Meters is %f", cen);
    return 0;
}