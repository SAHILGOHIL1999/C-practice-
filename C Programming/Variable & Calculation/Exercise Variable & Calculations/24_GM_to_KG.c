#include <stdio.h>
int main()
{
    float kg, gm;
    printf("Enter a GM = ");
    scanf("%f", &gm);
    kg = gm / 1000;
    printf("KG is %f", kg);

    return 0;
}