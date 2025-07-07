#include <stdio.h>

int main()
{
    float r;

    printf("Enter a radius Of circle = ");
    scanf("%f", &r);

    printf("%.2f Radiused Circle's Area %.2f", r, 3.14 * r * r);
    return 0;
}
