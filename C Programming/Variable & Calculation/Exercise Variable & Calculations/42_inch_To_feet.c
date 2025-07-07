#include <stdio.h>
int main()
{
    float inch, feet;
    printf("Enter a Inch = ");
    scanf("%f", &inch);

    feet = inch * 12;

    printf(" Feet is %f", feet);

    return 0;
}