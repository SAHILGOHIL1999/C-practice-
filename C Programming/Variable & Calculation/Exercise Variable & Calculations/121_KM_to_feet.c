#include <stdio.h>
int main()
{
    float m, cm, ft;
    printf("Enter Meters: ");
    scanf("%f", &m);

    cm = m * 100;
    ft = cm / 30.48;

    printf("Feet : %f", ft);
    return 0;
}
