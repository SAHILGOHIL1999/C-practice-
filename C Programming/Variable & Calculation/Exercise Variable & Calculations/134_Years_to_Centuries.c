#include <stdio.h>
int main()
{
    float years, centuries;
    printf("Enter years: ");
    scanf("%f", &years);
    centuries = years / 100;
    printf("Centuries: %f", centuries);
    return 0;
}
