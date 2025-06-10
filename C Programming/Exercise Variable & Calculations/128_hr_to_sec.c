#include <stdio.h>
int main()
{
    float hr, min, sec;

    printf("Enter Hours : ");
    scanf("%f", &hr);

    min = hr * 60;
    sec = min * 60;

    printf("Seconds : %f", sec);
    return 0;
}