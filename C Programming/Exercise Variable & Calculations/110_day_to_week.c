#include <stdio.h>
int main()
{
    float days, wk;
    printf("Enter days: ");
    scanf("%f", &days);
    wk = days / 7;
    printf("Weeks: %f", wk);
    return 0;
}