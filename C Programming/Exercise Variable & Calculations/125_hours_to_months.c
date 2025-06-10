#include <stdio.h>
int main()
{
    float hr, dy, yr, mn;

    printf("Enter Hours : ");
    scanf("%f", &hr);

    dy = hr / 24;
    yr = dy / 365;
    mn = yr * 12;

    printf("Month : %f", mn);
    return 0;
}       