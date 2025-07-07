#include <stdio.h>
int main()
{
    float inch, cm, mtr, km, ml;
    printf("Enter a Inch = ");
    scanf("%f", &inch);

    cm = inch * 2.54;
    mtr = cm / 100;
    km = mtr / 1000;
    ml = km / 1.609;

    printf(" Miles is %f", ml);

    return 0;
}