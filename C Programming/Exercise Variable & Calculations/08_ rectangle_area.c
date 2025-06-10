#include <stdio.h>

int main()
{
    int len, wid, area;
    printf("Enter a length Of rectangle = ");
    scanf("%d", &len);

    printf("Enter a width Of rectangle = ");
    scanf("%d", &wid);

    area = len * wid;

    printf("Area Of %d x %d rectangle Is %d", len, wid, area);

    return 0;
}