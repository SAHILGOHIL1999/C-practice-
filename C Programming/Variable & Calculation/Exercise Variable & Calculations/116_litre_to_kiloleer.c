#include <stdio.h>
int main()
{
    float ltr, kl;
    printf("Enter Leters: ");
    scanf("%f", &ltr);
    kl = ltr / 1000;
    printf("KiloLeters: %f", kl);
    return 0;
}