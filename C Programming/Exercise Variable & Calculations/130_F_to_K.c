#include <stdio.h>
int main()
{
    int f, k;

    printf("Enter a Fahrenheit = ");
    scanf("%d", &f);

    k = (f - 32) / 1.8 + 273.15;

    printf("Kelvin is %d", k);

    return 0;
}