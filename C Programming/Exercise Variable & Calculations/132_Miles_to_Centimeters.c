#include <stdio.h>
int main()
{
    float miles, km, meters, cm;
    printf("Enter miles: ");
    scanf("%f", &miles);
    km = miles * 1.60934;
    meters = km * 1000;
    cm = meters * 100;
    printf("Centimeters: %f", cm);
    return 0;
}