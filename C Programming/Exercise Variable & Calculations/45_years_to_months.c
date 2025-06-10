#include <stdio.h>
int main()
{
    float yr, mon;
    printf("Enter a Years = ");
    scanf("%f", &yr);

    mon = yr * 12;

    printf("Months is %f", mon);
    return 0;
}