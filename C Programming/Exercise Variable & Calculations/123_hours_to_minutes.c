#include <stdio.h>
int main()
{
    float hr, min;

    printf("Enter Hours : ");
    scanf("%f", &hr);

    min = hr / 60;

    printf("Minuts : %f", min);
    return 0;
}