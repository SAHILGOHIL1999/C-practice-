#include <stdio.h>
int main()
{
    float yr, dec;
    printf("Enter Years : ");
    scanf("%f", &yr);
    dec = yr / 10;
    printf("Decades : %f", dec);
    return 0;
}