#include <stdio.h>
int main()
{
    float meters, cm, inches;
    printf("Enter meters: ");
    scanf("%f", &meters);
    cm = meters * 100;
    inches = cm / 2.54;
    printf("Inches: %f", inches);
    return 0;
}