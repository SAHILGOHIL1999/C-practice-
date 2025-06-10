#include <stdio.h>
int main()
{
    float miles, km, mtr, cm, feet;

    printf("Enter miles: ");
    scanf("%f", &miles);

    km = miles * 1.60934;
    mtr = km * 1000;
    cm = mtr * 100;
    feet = cm / 30.48;

    printf("Kilometers: %f", km);

    return 0;
}
