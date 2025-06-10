#include <stdio.h>
int main()
{
    int wk, yr, mil;

    printf("Enter a Week = ");
    scanf("%d", &wk);
    yr = wk / 52;
    mil = yr / 1000;
    printf("Millenniums Is %d", mil);

    return 0;
}