#include <stdio.h>
int main()
{
    float ml, liters;
    printf("Enter milliliters: ");
    scanf("%f", &ml);
    liters = ml / 1000;
    printf("Liters: %f", liters);
    return 0;
}