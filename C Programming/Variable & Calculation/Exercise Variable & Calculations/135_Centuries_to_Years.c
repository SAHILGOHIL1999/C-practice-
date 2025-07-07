#include <stdio.h>
int main()
{
    float centuries, years;
    printf("Enter centuries: ");
    scanf("%f", &centuries);
    years = centuries * 100;
    printf("Years: %f", years);
    return 0;
}