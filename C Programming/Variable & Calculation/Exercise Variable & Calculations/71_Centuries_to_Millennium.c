#include <stdio.h>
int main()
{
    float centuries, millennium;
    printf("Enter centuries: ");
    scanf("%f", &centuries);
    millennium = centuries / 10;
    printf("Millennium: %f", millennium);
    return 0;
}