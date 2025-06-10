#include <stdio.h>
int main()
{
    float decades, centuries;
    printf("Enter decades: ");
    scanf("%f", &decades);
    centuries = decades / 10;
    printf("Centuries: %f", centuries);
    return 0;
}