#include <stdio.h>
int main()
{
    float cm, mtr, km;
    
    printf("Enter CM : ");
    scanf("%f", &cm);

    mtr = cm / 100;
    km=mtr/1000;

    printf("KiloMeters: %f", km);
    return 0;
}