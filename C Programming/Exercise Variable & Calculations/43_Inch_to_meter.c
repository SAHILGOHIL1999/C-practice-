#include <stdio.h>
int main()
{
    float inch, cm, mtr;
    printf("Enter a Inch = ");
    scanf("%f", &inch);

    cm = inch * 2.54;
    mtr = cm / 100;

    printf(" Meters is %f", mtr);

    return 0;
}