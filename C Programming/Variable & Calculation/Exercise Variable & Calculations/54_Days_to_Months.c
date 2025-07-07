#include <stdio.h>
int main()
{
    float days, months, yr;
    printf("Enter days: ");
    scanf("%f", &days);
    yr= days / 365;
    months = yr * 12; 
    
    printf("Months: %f", months);
    return 0;
}