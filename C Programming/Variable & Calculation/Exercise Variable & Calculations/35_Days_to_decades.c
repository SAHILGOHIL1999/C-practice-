#include <stdio.h>
int main()
{
    float dy, yr, dec;

    printf("Enter a Days = ");
    scanf("%f", &dy);

    yr = dy / 365;
    dec = yr / 10;

    printf("Decades id %f", dec);

    return 0;
}