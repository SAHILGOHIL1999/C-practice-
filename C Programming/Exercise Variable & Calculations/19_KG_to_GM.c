#include <stdio.h>
int main()
{
    int kg, gm;
    printf("Enter a KG = ");
    scanf("%d", &kg);
    gm = kg * 1000;
    printf(" GM is %d", gm);

    return 0;
}