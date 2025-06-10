#include <stdio.h>
int main()
{
    float mil, cen;
    printf("Enter a Millenniums = ");
    scanf("%f", &mil);

    cen = mil * 10;

    printf(" Century is %f", cen);

    return 0;
}