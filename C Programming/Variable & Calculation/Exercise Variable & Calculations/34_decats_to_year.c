#include <stdio.h>
int main()
{
    float dec, yr;

    printf("Enter a Decades = ");
    scanf("%f", &dec);

    yr = dec * 10;
    printf("Years id %f", yr);

    return 0;
}