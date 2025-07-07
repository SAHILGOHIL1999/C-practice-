#include <stdio.h>
int main()
{
    float sec, min, hr, day, wk;

    printf("Enter Sconds : ");
    scanf("%f", &sec);

    min = sec / 60;
    hr = min / 60;
    day = hr / 24;
    wk = day / 7;

    printf("Wekks : %f", wk);

    return 0;
}
