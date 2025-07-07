#include <stdio.h>
int main()
{
    float kl, ltr, ml;
    printf("Enter a KiloLiters = ");
    scanf("%f", &kl);

    ltr = kl * 1000;
    ml = ltr * 1000;

    printf(" M.L. is %f", ml);

    return 0;
}