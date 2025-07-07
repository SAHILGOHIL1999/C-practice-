#include <stdio.h>
int main()
{
    float ft, cm;
    printf("Enter a Feet = ");
    scanf("%f", &ft);
    cm = ft * 30.48;
    printf(" Centimeters is %.2f", cm);

    return 0;
}