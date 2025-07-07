#include <stdio.h>
int main()
{
    float dy, hr;

    printf("Enter a Hours = ");
    scanf("%f", &hr);

    dy = hr / 24;

    printf("Day id %f", dy);

    return 0;
}