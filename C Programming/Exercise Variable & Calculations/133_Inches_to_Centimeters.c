#include <stdio.h>
int main()
{
    float inches, cm;
    printf("Enter inches: ");
    scanf("%f", &inches);
    cm = inches * 2.54;
    printf("Centimeters: %f", cm);
    return 0;
}