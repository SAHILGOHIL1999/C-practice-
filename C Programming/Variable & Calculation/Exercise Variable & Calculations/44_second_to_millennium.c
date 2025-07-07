#include <stdio.h>
int main()
{
    float sec, min, hr, dy, yr, cen, mil;
    printf("Enter a Seconds = ");
    scanf("%f", &sec);

    min = sec / 60;
    hr = min / 60;
    dy = hr / 24;
    yr = dy / 365;
    cen = yr / 100;
    mil = cen / 10;

    printf("Millennium is %f", cen);
    return 0;
}