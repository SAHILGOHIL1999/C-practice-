#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped: A = %.2f, B = %.2f", a, b);
    return 0;
}
