#include <stdio.h>
int main()
{
    float decades, millennium;
    printf("Enter decades: ");
    scanf("%f", &decades);
    millennium = decades / 100;
    printf("Millennium: %f", millennium);
    return 0;
}
