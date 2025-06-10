#include <stdio.h>
int main()
{
    int cen, yr, dy, hr;

    printf("Enter a Centuries = ");
    scanf("%d", &cen);

    yr = cen * 100;
    dy = yr * 365;
    hr = dy * 24;

    printf("Hours id %d", hr);

    return 0;
}