#include <stdio.h>
int main()
{
    float mil, yr, day, hr, min;
    printf("Enter a Minutes = ");
    scanf("%f", &mil);

    hr = min / 60;
    day = hr / 24;
    yr = day / 365;
    mil = yr / 1000;

    printf(" Millennium is %f", hr);

    return 0;
}