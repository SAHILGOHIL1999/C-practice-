#include <stdio.h>
int main()
{
    float a, b, temp;
    printf("Enter A: ");
    scanf("%f", &a);

    printf("Enter B: ");
    scanf("%f", &b);
    
    temp = a;
    a = b;
    b = temp;
    printf("Swapped: A = %.2f, B = %.2f", a, b);
    return 0;
}