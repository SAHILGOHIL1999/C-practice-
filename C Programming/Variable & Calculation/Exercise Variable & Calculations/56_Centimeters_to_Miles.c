#include <stdio.h>
int main()
{
    float cm, meters, km, miles;
    printf("Enter centimeters: ");
    scanf("%f", &cm);
    meters = cm / 100;
    km = meters / 1000;
    miles = km / 1.60934;
    printf("Miles: %f", miles);
    return 0;
}