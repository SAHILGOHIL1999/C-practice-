#include <stdio.h>
int main()
{
    float km, mile;
    printf("Enter KiloMeters: ");
    scanf("%f", &km);

    mile = km / 1.609;

    printf("Feet : %f", mile);
    return 0;
}
