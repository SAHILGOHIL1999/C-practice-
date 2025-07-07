#include <stdio.h>
int main()
{
    float miles, feet, inches;
    printf("Enter miles: ");
    scanf("%f", &miles);
    feet = miles * 5280;
    inches = feet * 12;
    printf("Inches: %f", inches);
    return 0;
}