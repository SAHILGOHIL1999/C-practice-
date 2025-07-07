#include <stdio.h>
int main()
{
    float ft, cm, mtr, km;
    printf("Enter a Feet = ");
    scanf("%f", &ft);
    cm = ft * 30.48;
    mtr = cm / 100;
    km = mtr / 1000;
    printf(" Kilometers is %f", km);

    return 0;
}