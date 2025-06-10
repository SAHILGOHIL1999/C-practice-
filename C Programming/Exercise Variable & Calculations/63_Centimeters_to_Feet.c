#include <stdio.h>
int main()
{
    float cm, feet;
    printf("Enter centimeters: ");
    scanf("%f", &cm);
    feet = cm / 30.48;

    printf("Feet: %f", feet);
    return 0;
}
