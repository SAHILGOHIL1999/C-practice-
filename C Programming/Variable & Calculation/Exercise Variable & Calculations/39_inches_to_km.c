#include <stdio.h>
int main()
{
    float inch, cm, mtr, km;

    printf("Enter a Inchs = ");
    scanf("%f", &inch);

    cm = inch * 2.54;
    mtr = cm / 100;
    km = mtr / 1000;

    printf("K.M. is %f", km);

    return 0;
}