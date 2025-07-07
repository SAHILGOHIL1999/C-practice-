#include <stdio.h>
int main()
{
    float cen, yr, dy, hr, min;

    printf("Enter a Centuries = ");
    scanf("%f", &cen);

    yr = cen * 100;
    dy = yr * 365;
    hr = dy * 24;
    min = hr * 60;

    printf("Minutes id %f", hr);

    return 0;
}