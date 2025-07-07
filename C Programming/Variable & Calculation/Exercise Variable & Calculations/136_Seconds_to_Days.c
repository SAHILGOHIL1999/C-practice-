#include <stdio.h>
int main()
{
    float seconds, minutes, hours, days;
    printf("Enter seconds: ");
    scanf("%f", &seconds);
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    printf("Days: %f", days);
    return 0;
}