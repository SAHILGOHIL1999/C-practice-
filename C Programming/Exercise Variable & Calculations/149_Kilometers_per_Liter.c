#include <stdio.h>
int main()
{
    float km, liters, kmpl;
    
    printf("Enter distance (km) : ");
    scanf("%f", &km);
    printf("Enter liters : ");
    scanf("%f", &liters);

    kmpl = km / liters;
    printf("Average: %.2f km/L", kmpl);
    return 0;
}