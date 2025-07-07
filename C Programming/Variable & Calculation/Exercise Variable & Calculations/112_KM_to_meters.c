#include <stdio.h>
int main()
{
    float km, m;
    printf("Enter kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    printf("meters: %f", m);
    return 0;
}
