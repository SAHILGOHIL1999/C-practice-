#include <stdio.h>
int main()
{
    float km, m, cm;
    printf("Enter kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    printf("Centimeters: %f", cm);
    return 0;
}
