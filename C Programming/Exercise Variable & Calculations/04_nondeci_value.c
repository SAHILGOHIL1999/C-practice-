// . Accept a decimal value and print it without the decimal part.
#include <stdio.h>
int main()
{
    float a;
    printf("Enter decimal Value = ");
    scanf("%f", &a);

    printf("\nAfter converted = %.0f", a);

    return 0;
}