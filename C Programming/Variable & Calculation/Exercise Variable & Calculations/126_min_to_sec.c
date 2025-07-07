#include <stdio.h>
int main()
{
    float min, sec;

    printf("Enter Minuts : ");
    scanf("%f", &min);

    sec = min * 60;

    printf("Minuts : %f", sec);
    return 0;
}