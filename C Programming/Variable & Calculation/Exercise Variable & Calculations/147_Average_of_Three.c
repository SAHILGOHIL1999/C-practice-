#include <stdio.h>
int main()
{
    float a, b, c, avg;
    
    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);
    printf("Enter C: ");
    scanf("%f", &c);

    avg = (a + b + c) / 3;
    printf("Average: %f", avg);
    return 0;
}