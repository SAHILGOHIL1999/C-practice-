#include <stdio.h>
int main()
{
    float m, km;
    printf("Enter meters: ");
    scanf("%f", &m);
    km = m / 1000;
    printf("Kilometers: %f", km);
    return 0;
}