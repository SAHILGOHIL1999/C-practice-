#include <stdio.h>
int main()
{
    float feet, cm, mtr;
    printf("Enter a Feet = ");
    scanf("%f", &feet);
    cm = feet * 30.48;
    mtr = cm / 100;
    printf("Meters is %f", mtr);
    return 0;
}