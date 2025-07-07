#include <stdio.h>
int main()
{
    float mtr, km, mile;
    
    printf("Enter a Meters = ");
    scanf("%f", &mtr);

    km = mtr / 1000;
    mile = km / 1.6;

    printf("Mile is %f", mile);

    return 0;
}