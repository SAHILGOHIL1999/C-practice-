#include <stdio.h>
int main()
{
    float kl, l;
    printf("Enter kiloliters: ");
    scanf("%f", &kl);
    l = kl * 1000;
    printf("Liters: %f", l);
    return 0;
}