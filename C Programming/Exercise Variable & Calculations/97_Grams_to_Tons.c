#include <stdio.h>
int main()
{
    float grams, kg, tons;
    printf("Enter grams: ");
    scanf("%f", &grams);
    kg = grams / 1000;
    tons = kg / 1000;
    printf("Tons: %f", tons);
    return 0;
}