#include <stdio.h>
int main()
{
    float mil, yr, day, hr;
    printf("Enter a Millenniums = ");
    scanf("%f", &mil);
    yr = mil * 1000;
    day = yr * 365;
    hr = day * 24;
    printf(" Hours is %f", hr);

    return 0;
}