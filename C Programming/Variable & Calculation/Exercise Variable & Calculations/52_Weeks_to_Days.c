#include <stdio.h>
int main()
{
    float weeks, days;
    printf("Enter weeks: ");
    scanf("%f", &weeks);
    days = weeks * 7;      // 1 week = 7 days
    printf("Days: %f", days);
    return 0;
}