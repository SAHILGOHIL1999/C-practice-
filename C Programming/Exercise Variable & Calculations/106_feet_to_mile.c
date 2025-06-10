#include <stdio.h>
int main()
{
    float ft, cm, mtr, km, miles;
    printf("Enter Feet : ");
    scanf("%f", &miles);

    cm = ft * 30.48;
    mtr = cm / 100;
    km = mtr / 1000;
    miles = km / 1.609;

    printf("Miles:  %f", km);
    return 0;
}
