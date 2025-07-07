#include <stdio.h>
int main()
{
    float wk, yr;
    printf("Enter Weeks : ");
    scanf("%f", &wk);

    yr = wk / 52;

    printf("Years : %f", yr);
    return 0;
}