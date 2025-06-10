#include <stdio.h>
int main()
{
    float dy, yr;
    printf("Enter Years : ");
    scanf("%f", &dy);

    yr = dy / 365;

    printf("Days : %f", yr);
    return 0;
}
