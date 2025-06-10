#include <stdio.h>
int main()
{
    float m, cm, inches, feet;
    printf("Enter meters: ");
    scanf("%f", &m);
    cm = m * 100;
    inches = cm / 2.54;
    feet = inches / 12;
    printf("Feet: %f", feet);
    return 0;
}