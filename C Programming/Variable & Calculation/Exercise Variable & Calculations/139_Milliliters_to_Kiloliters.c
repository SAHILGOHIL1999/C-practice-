#include <stdio.h>
int main()
{
    float ml, liters, kl;
    printf("Enter milliliters: ");
    scanf("%f", &ml);
    liters = ml / 1000;
    kl = liters / 1000;
    printf("Kiloliters: %f", kl);
    return 0;
}