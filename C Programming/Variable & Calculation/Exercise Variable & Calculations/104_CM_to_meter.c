#include <stdio.h>
int main()
{
    float cm, mtr;
    printf("Enter CM: ");
    scanf("%f", &cm);
    mtr = cm / 100;
    printf("Meters: %f", mtr);
    return 0;
}