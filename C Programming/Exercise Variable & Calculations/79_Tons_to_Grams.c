#include <stdio.h>
int main()
{
    float tons, kg, grams;
    printf("Enter tons: ");
    scanf("%f", &tons);
    kg = tons * 1000;
    grams = kg * 1000;
    printf("Grams: %f", grams);
    return 0;
}
