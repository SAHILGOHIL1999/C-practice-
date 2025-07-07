#include <stdio.h>
int main()
{
    float cm, inches;
    printf("Enter centimeters: ");
    scanf("%f", &cm);
    inches = cm / 2.54;
    printf("Inches: %f", inches);
    return 0;
}