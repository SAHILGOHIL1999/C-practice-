#include <stdio.h>
int main()
{
    float kg, tons;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    tons = kg / 1000;
    printf("Tons: %f", tons);
    return 0;
}
