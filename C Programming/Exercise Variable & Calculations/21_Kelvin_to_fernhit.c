#include <stdio.h>
int main()
{
    int k, f;
    printf("Enter a Kelvin = ");
    scanf("%d", &k);
    f = (k - 273.15) * 9 / 5 + 32;
    printf("Fahrenheit is %d", f);
    return 0;
}