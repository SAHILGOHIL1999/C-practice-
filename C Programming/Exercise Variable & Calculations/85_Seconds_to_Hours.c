#include <stdio.h>
int main()
{
    float seconds, minutes, hours;
    printf("Enter seconds: ");
    scanf("%f", &seconds);
    minutes = seconds / 60;
    hours = minutes / 60;
    printf("Hours: %f", hours);
    return 0;
}