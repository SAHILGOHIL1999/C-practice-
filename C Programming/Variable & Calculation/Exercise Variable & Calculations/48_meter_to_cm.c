#include <stdio.h>
int main()
{
    float mtr, km, cm;

    printf("Enter a Meters = ");
    scanf("%f", &mtr);

    km = mtr / 1000;
    mtr = km / 1000;
    cm = km * 100;

    printf("CM is %f", cm);

    return 0;
}