#include <stdio.h>
int main()
{
    int cen, yr, mon ;
    printf("Enter a Centuries = ");
    scanf("%d", &cen);
    yr = cen * 100;
    mon = yr * 12;
    printf(" Months is %d", mon);

    return 0;
}