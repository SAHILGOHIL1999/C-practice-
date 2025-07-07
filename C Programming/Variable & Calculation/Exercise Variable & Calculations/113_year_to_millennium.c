#include <stdio.h>
int main()
{
    int dy, yr, mill;
    printf("Enter a Year = ");
    scanf("%d", &yr);
    
    yr = dy * 365;
    mill = yr / 1000;

    printf(" Millennium is %d", mill);

    return 0;
}