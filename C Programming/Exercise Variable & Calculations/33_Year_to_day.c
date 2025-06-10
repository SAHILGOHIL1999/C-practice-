#include <stdio.h>
int main()
{
    int yr, dy;
    printf("Enter a Year = ");
    scanf("%d", &yr);
    dy = yr * 365;
    printf(" Day is %d", dy);

    return 0;
}