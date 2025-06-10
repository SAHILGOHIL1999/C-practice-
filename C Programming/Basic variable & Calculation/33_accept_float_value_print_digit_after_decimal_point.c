#include <stdio.h>

int main()
{
    // Accept a Float Value and Print the Digits After the Decimal Point
    float val;

    printf("Enter a Float value =");
    scanf("%d", &val);

    int integer_part = (int)val; /* (int)val = float convert in integer value */
    float fractional_part = val - integer_part;
    printf("Fractional part of %f is %f\n", val, fractional_part);
    return 0;
}