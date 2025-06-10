#include <stdio.h>
int main()
{
    float miles, km, meters;
    printf("Enter miles: ");
    scanf("%f", &miles);
    km = miles * 1.60934;
    meters = km * 1000;
    printf("Meters: %f", meters);
    return 0;
}