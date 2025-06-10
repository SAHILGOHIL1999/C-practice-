#include <stdio.h>
int main()
{
    float millennium, decades;
    printf("Enter millennium: ");
    scanf("%f", &millennium);
    decades = millennium * 100;
    printf("Decades: %f", decades);
    return 0;
}
