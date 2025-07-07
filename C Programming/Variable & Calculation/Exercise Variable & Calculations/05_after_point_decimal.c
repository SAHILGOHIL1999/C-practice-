#include <stdio.h>
int main()
{
    float f;
    printf("Enter a Decimal value = ");
    scanf("%f", &f);

    float frac_val;
    int int_val;

    int_val = (int)f; 
    frac_val = f - int_val;

    printf("Digits %f after decimal is %f\n", f, frac_val);
    return 0;
}